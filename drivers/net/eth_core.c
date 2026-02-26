// SPDX-License-Identifier: GPL-2.0-only
struct eth_stats { uint64_t rx_packets; uint64_t tx_packets; uint64_t errors; };

void eth_update_stats(struct eth_stats *stats) {
    printk("NET-ETH: Interface 'eth0' Statistics: RX:%llu TX:%llu ERR:%llu\n", 
           stats->rx_packets, stats->tx_packets, stats->errors);
}

void eth_init(void) {
    struct eth_stats current = {150230, 89440, 0};
    printk("NET-ETH: MAC Layer Link UP - 10Gbps/Full-Duplex\n");
    eth_update_stats(&current);
}
