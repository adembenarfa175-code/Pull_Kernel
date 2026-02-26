// SPDX-License-Identifier: GPL-2.0-only
// Pull Kernel team

# ifndef _PULL_HASHTABLE_H
# define _PULL_HASHTABLE_H

struct hlist_node {
    struct hlist_node *next, **pprev;
};

struct hlist_head {
    struct hlist_node *first;
};

void hlist_add_head(struct hlist_node *n, struct hlist_head *h);
# define hash_add(hashtable, node, key) \
    hlist_add_head(node, &hashtable[hash_min(key, HASH_BITS(hashtable))])

# endif
