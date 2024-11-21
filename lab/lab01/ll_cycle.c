#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if (head == NULL) {
        return 0;
    }

    if (head->next == NULL) {
        return 1;
    }

    node* tortoise = head;
    node* hare = head;

    do {
        hare = hare->next;
        if (hare == NULL) {
            return 0;
        }

        if (hare->next == NULL) {
            return 0;
        } else {
            hare = hare->next;
        }
        tortoise = tortoise->next;

    } while(tortoise != hare);

    return 1;
}