// SPDX-License-Identifier: GPL-2.0-only
// EEPROM Emulation Layer
#define EEPROM_SIZE 1024
static uint8_t eeprom_storage[EEPROM_SIZE];

void eeprom_write(uint32_t addr, uint8_t val) {
    if(addr < EEPROM_SIZE) {
        eeprom_storage[addr] = val;
        printk("EEPROM: Wrote 0x%02x to 0x%x\n", val, addr);
    }
}

void eeprom_init(void) {
    printk("MISC: Persistent Storage Emulation active.\n");
}
