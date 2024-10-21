#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct LinkedList {
    struct Node *head;
} LinkedList;

Node* createNode(int n) {
    Node *t = (Node *) malloc(sizeof(Node));
    t->data = n;
    t->next = NULL;
    return t;
}

int count(LinkedList *list) {
    int count = 0;
    Node *p = list->head;
    while (p) {
        count++;
        p = p->next;
    }
    return count;
}

void insert(LinkedList *list, int x, int idx) {
    Node *t = list->head;
    if (idx <= 0 || idx > count(list)) {
        printf("Index Out of Bounds\n");
    }
    else {
        struct Node *t = createNode(x);
        if (idx == 1) {
            t->next = list->head;
            list->head = t;
        }
        else {
            Node *p = list->head;
            for (int i = 1; i < idx - 1; i++) {
                p = p->next;
            }
            if (p) {
                t->next = p->next;
                p->next = t;
            }
        }
    }
}

void append(LinkedList *list, int x) {
    Node *t = createNode(x);
    if (list->head == NULL) {
        list->head = t;
    }
    else {
        Node *p = list->head;
        while (p->next) {
            p = p->next;
        }
        p->next = t;
    }
}

void display(LinkedList list) {
    Node *p = list.head;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int Delete(LinkedList *list, int idx) {
    Node *t;
    int x = -1;
    if (!list->head || idx <= 0)
        return x;
    else if (idx == 1) {
        t = list->head;
        x = t->data;
        list->head = list->head->next;
        free(t);
    }
    else {
        Node *p = list->head;
        for (int i = 1; i < idx - 1 && p; i++) {
            p = p->next;
        }
        if (p) {
            t = p->next;
            p->next = t->next;
            x = t->data;
            free(t);
        }
    }
    return x;
}

int search(LinkedList list, int key) {
    Node *p = list.head;
    while (p) {
        if (p->data == key)
            return 1;
        p = p->next;
    }
    return 0;
}

int main() {
    LinkedList l1 = {NULL};
    for (int i = 1; i <= 5; i++) {
        append(&l1, i);
    }
    insert(&l1, 20, 2);
    display(l1);
    return 0;
}