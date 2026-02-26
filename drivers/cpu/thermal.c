// SPDX-License-Identifier: GPL-2.0-only
struct thermal_trip { int temp_limit; const char *action; };

void thermal_enforce(int current_temp) {
    struct thermal_trip trips[] = { {75, "FAN_MAX"}, {90, "THROTTLE"}, {105, "SHUTDOWN"} };
    for(int i=0; i<3; i++) {
        if(current_temp >= trips[i].temp_limit)
            printk("THERMAL: ALERT! Temp %d >= Limit %d -> Action: %s\n", 
                   current_temp, trips[i].temp_limit, trips[i].action);
    }
}

void thermal_init(void) {
    printk("THERMAL: Monitoring CPU DTS Sensors...\n");
    thermal_enforce(82);
}
