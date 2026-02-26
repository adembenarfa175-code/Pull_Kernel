#include <stdint.h>

enum insn_code {
    ALU_ADD = 0x07, ALU_SUB = 0x17, ALU_MUL = 0x27, 
    ALU_DIV = 0x37, ALU_AND = 0x57, JMP_EXIT = 0x95
};

struct bpf_insn {
    uint8_t code;
    uint8_t dst_reg:4;
    uint8_t src_reg:4;
    int16_t off;
    int32_t imm;
};

/* محرك تنفيذ الأوامر (Execution Engine) لرفع التعقيد */
uint64_t run_interpreter_logic(struct bpf_insn *insns, uint64_t *regs) {
    for (int i = 0; i < 256; i++) {
        struct bpf_insn *insn = &insns[i];
        
        switch (insn->code) {
            case ALU_ADD:
                regs[insn->dst_reg] += insn->imm;
                break;
            case ALU_SUB:
                regs[insn->dst_reg] -= insn->imm;
                break;
            case ALU_MUL:
                regs[insn->dst_reg] *= insn->imm;
                break;
            case JMP_EXIT:
                return regs[0];
            default:
                break;
        }
    }
    return 0;
}
