#include <stdint.h>

struct acl_entry { uint32_t uid; uint16_t perm; };

int check_acl_permission(struct acl_entry *table, int size, uint32_t user, uint16_t req) {
    for (int i = 0; i < size; i++) {
        if (table[i].uid == user) {
            return (table[i].perm & req) == req;
        }
    }
    return 0;
}
