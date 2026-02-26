#!/usr/bin/env python3
import os
import re
import sys
from deep_translator import GoogleTranslator

# Global Configuration
# Default target language is English ('en'). Translator detects source automatically.
TARGET_LANGUAGE = 'en'
translator = GoogleTranslator(source='auto', target=TARGET_LANGUAGE)

# Supported file extensions for translation
SUPPORTED_EXTENSIONS = ('.c', '.h', '.S', '.py', 'Makefile')

def translate_content(text):
    """
    Cleans and translates the provided text.
    Returns original text if translation fails or content is too short.
    """
    clean_text = text.strip()
    if not clean_text or len(clean_text) < 2:
        return text
    try:
        # Auto-detects any language (Arabic, Chinese, etc.) and converts to TARGET_LANGUAGE
        return translator.translate(clean_text)
    except Exception:
        # Fallback to original text in case of network or API issues
        return text

def process_file_translation(file_path):
    """
    Reads a file, identifies comments based on file type, 
    translates them, and saves the file.
    """
    print(f"🌍 Translating: {file_path}")
    try:
        with open(file_path, 'r', encoding='utf-8') as f:
            lines = f.readlines()
    except UnicodeDecodeError:
        return # Skip binary or non-UTF-8 files

    updated_lines = []
    for line in lines:
        # 1. Handle C-style comments (//)
        if '//' in line:
            parts = line.split('//', 1)
            updated_lines.append(f"{parts[0]}// {translate_content(parts[1])}\n")

        # 2. Handle Shell, Python, and Makefile comments (#)
        elif '#' in line and not line.strip().startswith('#include'):
            parts = line.split('#', 1)
            updated_lines.append(f"{parts[0]}# {translate_content(parts[1])}\n")
        
        # 3. Handle Assembly comments (;)
        elif ';' in line and (file_path.endswith('.S') or file_path.endswith('.asm')):
            parts = line.split(';', 1)
            updated_lines.append(f"{parts[0]}; {translate_content(parts[1])}\n")
        
        # 4. Keep regular code lines as they are
        else:
            updated_lines.append(line)

    with open(file_path, 'w', encoding='utf-8') as f:
        f.writelines(updated_lines)

def run_project_translation():
    """
    Walks through the project directory and processes all supported source files.
    """
    project_root = os.getcwd()
    for root, directories, files in os.walk(project_root):
        # Exclusion logic: Skip version control and build artifacts
        if '.git' in root or 'build' in root:
            continue
            
        for file_name in files:
            if file_name.endswith(SUPPORTED_EXTENSIONS) or file_name == 'Makefile':
                full_path = os.path.join(root, file_name)
                
                # Critical: Prevent the script from translating its own source code
                if "comment_translator.py" in full_path:
                    continue
                    
                process_file_translation(full_path)

if __name__ == "__main__":
    run_project_translation()

