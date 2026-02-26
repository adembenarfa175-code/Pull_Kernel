#!/bin/bash
# SPDX-License-Identifier: GPL-2.0-only
# Pull Kernel team
OUTPUT_FILE="init/main_header.h"
HEADER_GUARD="_PULL_MAIN_HEADER_H"

echo "Generating $OUTPUT_FILE with UAPI support..."

# 1. بداية الملف
cat << EOT > $OUTPUT_FILE
#ifndef $HEADER_GUARD
#define $HEADER_GUARD

/**
 * Pull Kernel - Master Header File
 * Generated automatically by gen_main_header.sh
 * This file aggregates ALL internal and UAPI kernel headers.
 */

EOT

# 2. إضافة الترويسات الأساسية (Internal Kernel Headers)
echo "/* --- Core Internal Kernel Headers --- */" >> $OUTPUT_FILE
find include/pull -maxdepth 1 -name "*.h" | sort | while read -r header; do
    rel_path=$(echo "$header" | sed 's|include/||')
    echo "#include <$rel_path>" >> $OUTPUT_FILE
done

echo "" >> $OUTPUT_FILE

# 3. إضافة ترويسات الـ UAPI (مهم جداً للتعامل مع البرامج)
echo "/* --- User API (UAPI) Headers --- */" >> $OUTPUT_FILE
find include/uapi/pull -name "*.h" | sort | while read -r header; do
    # تحويل include/uapi/pull/fs.h إلى uapi/pull/fs.h
    rel_path=$(echo "$header" | sed 's|include/||')
    echo "#include <$rel_path>" >> $OUTPUT_FILE
done

echo "" >> $OUTPUT_FILE

# 4. إضافة ترويسات المعمارية
cat << EOT >> $OUTPUT_FILE
/* --- Architecture Specific Headers --- */
#if defined(__x86_64__)
EOT

find arch/x86/include/asm -name "*.h" | sort | while read -r header; do
    rel_path=$(echo "$header" | sed 's|arch/x86/include/||')
    echo "    #include <$rel_path>" >> $OUTPUT_FILE
done

cat << EOT >> $OUTPUT_FILE
#elif defined(__aarch64__)
EOT

if [ -d "arch/arm64/include/asm" ]; then
    find arch/arm64/include/asm -name "*.h" | sort | while read -r header; do
        rel_path=$(echo "$header" | sed 's|arch/arm64/include/||')
        echo "    #include <$rel_path>" >> $OUTPUT_FILE
    done
fi

echo "#endif" >> $OUTPUT_FILE

# 5. إضافة الترويسات الفرعية (Subsystems)
echo "" >> $OUTPUT_FILE
echo "/* --- Subsystem Headers --- */" >> $OUTPUT_FILE
find include/net include/kunit include/trace -name "*.h" 2>/dev/null | sort | while read -r header; do
    rel_path=$(echo "$header" | sed 's|include/||')
    echo "#include <$rel_path>" >> $OUTPUT_FILE
done

# 6. النهاية
echo "" >> $OUTPUT_FILE
echo "#endif /* $HEADER_GUARD */" >> $OUTPUT_FILE

echo "Done! $OUTPUT_FILE now contains all 158+ headers."
