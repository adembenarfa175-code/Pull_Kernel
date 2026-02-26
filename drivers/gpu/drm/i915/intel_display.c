// SPDX-License-Identifier: GPL-2.0-only
struct intel_crtc { int pipe; bool active; uint32_t base_addr; };

void intel_enable_pipe(struct intel_crtc *crtc) {
    printk("DRM-I915: Enabling Display Pipe %c at 0x%x\n", 'A' + crtc->pipe, crtc->base_addr);
    crtc->active = true;
}

void i915_driver_init(void) {
    printk("DRM: Intel Graphics (i915) Kernel Mode Setting (KMS) active.\n");
}
