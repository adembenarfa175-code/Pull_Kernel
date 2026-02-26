#include <stdint.h>

#define BUF_SIZE 64
struct input_event { uint16_t type; uint16_t code; int32_t value; };
struct input_buffer { struct input_event buffer[BUF_SIZE]; int head; int tail; };

void push_event(struct input_buffer *b, uint16_t type, int32_t val) {
    b->buffer[b->head].type = type;
    b->buffer[b->head].value = val;
    b->head = (b->head + 1) % BUF_SIZE;
}
