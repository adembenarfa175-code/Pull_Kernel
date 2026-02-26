// SPDX-License-Identifier: GPL-2.0-only
// WiFi 6 (802.11ax) Management Frame Handler
struct ax_capability {
    uint16_t he_cap;
    uint32_t mcs_map;
};

void wifi6_parse_he_ie(struct ax_capability *cap) {
    printk("WIFI6: High Efficiency (HE) IE detected. MCS Map: 0x%08x\n", cap->mcs_map);
}

void wifi6_init(void) {
    printk("WIFI: 802.11ax (Wi-Fi 6) stack extensions enabled.\n");
}
