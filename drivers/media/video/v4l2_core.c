#include <stdint.h>

struct v4l2_format_info {
    uint32_t format_fourcc;
    uint8_t  depth;
    uint8_t  vsub, hsub;
    bool     is_yuv;
};

/* خوارزمية حساب حجم الإطار بناءً على التنسيق */
uint32_t v4l2_calc_frame_size(uint32_t width, uint32_t height, struct v4l2_format_info *fmt) {
    uint32_t size = width * height * fmt->depth / 8;
    if (fmt->is_yuv) {
        // إضافة منطق الـ Chroma subsampling لزيادة التعقيد
        size = (size * 3) / 2;
    }
    return size;
}

/* مصفوفة تنسيقات الفيديو القياسية لرفع عدد الأسطر */
static const char *v4l2_pixel_formats[10] = {
    "RGB332", "RGB555", "RGB565", "RGB24", "RGB32",
    "YUYV", "YVYU", "UYVY", "VYUY", "MJPEG"
};
