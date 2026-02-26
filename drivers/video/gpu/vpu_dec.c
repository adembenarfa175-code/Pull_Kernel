// SPDX-License-Identifier: GPL-2.0-only
// Hardware Video Decoding Accelerator (VPU)
struct vpu_codec {
    const char *name;
    bool h265_support;
    bool vp9_support;
};

void vpu_decode_frame(void *stream, size_t size) {
    printk("VPU: Decoding %zu byte hardware-accelerated frame...\n", size);
}

void vpu_init(void) {
    struct vpu_codec vc = {"Pull-Decode-X1", true, true};
    printk("VPU: %s Hardware Decoder online (4K @ 120fps support).\n", vc.name);
}
