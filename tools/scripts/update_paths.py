import os

# خريطة التحويل التي اخترتها
renaming_map = {
    "core_libs": "lib",
    "mem_mgr": "mm",
    "hardware": "drivers",
    "protocols": "net",
    "supervisor": "virt",
    "filesystems": "fs"
}

def update_content(file_path):
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            content = f.read()
        
        new_content = content
        for old_name, new_name in renaming_map.items():
            # تحديث المسارات في Makefile أو أي ملف نصي
            new_content = new_content.replace(f"{old_name}/", f"{new_name}/")
        
        if new_content != content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(new_content)
            print(f"✔ Updated: {file_path}")
    except Exception as e:
        print(f"✘ Error in {file_path}: {e}")

def main():
    # البحث في كل ملفات المشروع (Makefile, .c, .h, .sh)
    extensions = ('.c', '.h', '.S', '.sh', 'Makefile', '.ld')
    for root, dirs, files in os.walk("."):
        for file in files:
            if file.endswith(extensions) or file == 'Makefile':
                update_content(os.path.join(root, file))

if __name__ == "__main__":
    main()

