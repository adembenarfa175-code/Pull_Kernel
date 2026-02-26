// SPDX-License-Identifier: GPL-2.0-only
// Generic PHY Device State Machine
enum phy_state { PHY_DOWN, PHY_READY, PHY_UP, PHY_ERROR };

struct phy_device {
    int speed;
    int duplex;
    enum phy_state state;
};

void phy_print_status(struct phy_device *phy) {
    const char *s = (phy->state == PHY_UP) ? "Link UP" : "Link DOWN";
    printk("PHY: Speed: %d Mbps, Duplex: %s, State: %s\n", 
           phy->speed, (phy->duplex) ? "Full" : "Half", s);
}

void phy_core_init(void) {
    struct phy_device eth0_phy = { 1000, 1, PHY_UP };
    printk("PHY: Generic MDIO Bus Registered.\n");
    phy_print_status(&eth0_phy);
}
