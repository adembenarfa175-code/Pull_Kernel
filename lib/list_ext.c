// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

#include <pull/list.h>

void list_add_tail(struct list_head *new, struct list_head *head) {
    struct list_head *prev = head->prev;
    
    new->next = head;
    new->prev = prev;
    prev->next = new;
    head->prev = new;
}

/* hlist_add_head: إضافة عنصر لرأس قائمة الهاش */
void hlist_add_head(struct hlist_node *n, struct hlist_head *h) {
    struct hlist_node *first = h->first;
    n->next = first;
    if (first)
        first->pprev = &n->next;
    h->first = n;
    n->pprev = &h->first;
}
