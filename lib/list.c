// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/list.h>

void list_add(struct list_head *new, struct list_head *head) {
    struct list_head *next = head->next;
    next->prev = new;
    new->next = next;
    new->prev = head;
    head->next = new;
}

void list_del(struct list_head *entry) {
    entry->next->prev = entry->prev;
    entry->prev->next = entry->next;
    entry->next = (void *)0;
    entry->prev = (void *)0;
}

int list_empty(const struct list_head *head) {
    return head->next == head;
}
