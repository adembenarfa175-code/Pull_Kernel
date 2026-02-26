import os
import re
from datetime import datetime

class KernelAnalyzer:
    def __init__(self, root_dir):
        self.root_dir = root_dir
        self.total_files = 0
        self.total_lines = 0
        self.bugs_found = []
        self.achievements = []
        
        # Patterns for common bugs in C (Kernel level)
        self.bug_patterns = {
            "Memory Leak Risk": r"malloc\(|kmalloc\(",
            "Unsafe String Op": r"strcpy\(|strcat\(|sprintf\(",
            "Potential Buffer Overflow": r"gets\(|scanf\(",
            "Empty Exception Handler": r"catch\s*\(\.\.\.\)\s*\{\}",
            "Hardcoded Memory Addr": r"0x[0-9a-fA-F]{8,}"
        }

    def scan_project(self):
        for root, dirs, files in os.walk(self.root_dir):
            if '.git' in root: continue
            for file in files:
                if file.endswith(('.c', '.h', '.S', '.py', '.sh')):
                    self.total_files += 1
                    file_path = os.path.join(root, file)
                    self.analyze_file(file_path)

    def analyze_file(self, path):
        try:
            with open(path, 'r', encoding='utf-8', errors='ignore') as f:
                lines = f.readlines()
                self.total_lines += len(lines)
                content = "".join(lines)
                
                # Check for bugs
                for bug_type, pattern in self.bug_patterns.items():
                    matches = re.findall(pattern, content)
                    if matches:
                        self.bugs_found.append(f"[{bug_type}] found in {path} ({len(matches)} occurrences)")
        except Exception as e:
            pass

    def check_achievements(self):
        if self.total_lines >= 10000:
            self.achievements.append("⭐ Achievement Unlocked: 10K Lines of Code (Junior Kernel Architect)")
        if self.total_files >= 400:
            self.achievements.append("📂 Achievement Unlocked: 400+ Files (Structural Integrity)")
        if any("security" in b.lower() for b in self.bugs_found):
            self.achievements.append("🛡️ Security Focus: Active monitoring of vulnerabilities")

    def display_report(self):
        print("-" * 60)
        print(f"🚀 KERNEL ANALYTICS REPORT - {datetime.now().strftime('%Y-%m-%d %H:%M:%S')}")
        print("-" * 60)
        
        print(f"\n📈 OVERALL PROGRESS:")
        print(f"   Total Files: {self.total_files}")
        print(f"   Total Lines: {self.total_lines}")
        print(f"   Estimated Complexity Score: {self.total_lines // 15}") # Simple heuristic
        
        print(f"\n🏆 ACHIEVEMENTS:")
        for ach in self.achievements:
            print(f"   {ach}")
            
        print(f"\n🐞 BUGS & VULNERABILITIES FOUND: {len(self.bugs_found)}")
        if not self.bugs_found:
            print("   ✅ No critical bugs detected. Code looks clean!")
        else:
            for i, bug in enumerate(self.bugs_found[:15]): # Show first 15
                print(f"   {i+1}. {bug}")
            if len(self.bugs_found) > 15:
                print(f"   ... and {len(self.bugs_found)-15} more.")
        
        print("-" * 60)

if __name__ == "__main__":
    analyzer = KernelAnalyzer('.')
    analyzer.scan_project()
    analyzer.check_achievements()
    analyzer.display_report()

