#ifndef LINKED_LISTS
#define LINKED_LISTS

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
typedef struct list list_t;

typedef struct list {
        char *str;
        int len;
        list_t *next;
} list_t;

size_t print_list(const list_t *h);

int _putchar(char c);

#endif
