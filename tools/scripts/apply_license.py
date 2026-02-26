import os

# النص المراد إضافته
header_c = "// SPDX-License-Identifier: GPL-2.0-only\n// Pull Kernel team\n\n"
header_sh = "# SPDX-License-Identifier: GPL-2.0-only\n# Pull Kernel team\n\n"

def apply_license(file_path):
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        # التأكد من أن الملف ليس موشوماً بالفعل
        if "SPDX-License-Identifier" in content:
            return

        # تحديد نوع التعليق بناءً على الامتداد
        if file_path.endswith(('.c', '.h', '.S')):
            new_content = header_c + content
        elif file_path.endswith(('.sh', 'Makefile')) or file_path.endswith('.ld'):
            # التعامل مع الـ Shebang في ملفات .sh
            if content.startswith('#!'):
                lines = content.split('\n')
                lines.insert(1, header_sh.strip())
                new_content = '\n'.join(lines)
            else:
                new_content = header_sh + content
        else:
            return # تخطي الملفات غير المدعومة

        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(new_content)
        print(f"✔ Licensed: {file_path}")
        
    except Exception as e:
        print(f"✘ Error in {file_path}: {e}")

def main():
    # استثناء مجلد build والملفات المخفية
    for root, dirs, files in os.walk("."):
        if 'build' in dirs: dirs.remove('build')
        if '.git' in dirs: dirs.remove('.git')
        
        for file in files:
            file_path = os.path.join(root, file)
            apply_license(file_path)

if __name__ == "__main__":
    main()

