// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_LIST_H
# define _PULL_LIST_H

struct list_head {
    struct list_head *next, *prev;
};

# define LIST_HEAD_INIT(name) { &(name), &(name) }
# define LIST_HEAD(name) \
    struct list_head name = LIST_HEAD_INIT(name)

static inline void INIT_LIST_HEAD(struct list_head *list) {
    list->next = list;
    list->prev = list;
}

/* List Manipulation */
void list_add(struct list_head *new, struct list_head *head);
void list_add_tail(struct list_head *new, struct list_head *head);
void list_del(struct list_head *entry);
int list_empty(const struct list_head *head);

/* List Traversal Macros */
# define list_for_each_entry(pos, head, member) \
    for (pos = container_of((head)->next, typeof(*pos), member); \
         &pos->member != (head); \
         pos = container_of(pos->member.next, typeof(*pos), member))

# define list_for_each_entry_safe(pos, n, head, member) \
    for (pos = container_of((head)->next, typeof(*pos), member), \
         n = container_of(pos->member.next, typeof(*pos), member); \
         &pos->member != (head); \
         pos = n, n = container_of(n->member.next, typeof(*n), member))

# endif
