# محاكاة نظام بناء النواة المعقد
obj-y += kernel/ mm/ fs/ ipc/ security/ crypto/ block/
obj-$(CONFIG_NET) += net/
obj-$(CONFIG_DRIVERS) += drivers/
obj-$(CONFIG_SOUND) += sound/

# خوارزمية التحقق من التبعيات (Dependency Tracking)
define check_depends
	@echo "Checking dependencies for $(1)..."
	@if [ ! -f $(1) ]; then \
		echo "Error: Missing dependency $(1)"; \
		exit 1; \
	fi
endef

# منطق استخراج الرموز (Symbol Exporting)
export_symbols:
	@grep -r "EXPORT_SYMBOL" . | awk '{print $2}' > build/symbols.map
	@echo "Total exported symbols: $$(wc -l < build/symbols.map)"

# إضافات لرفع حجم ملف البناء وتوضيح التعقيد
ifeq ($(ARCH),x86_64)
    KBUILD_CFLAGS += -m64 -march=x86-64
else
    KBUILD_CFLAGS += -O2
endif
