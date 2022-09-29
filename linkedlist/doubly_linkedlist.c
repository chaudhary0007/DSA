#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    struct Node *N1;
    struct Node *N2;
    struct Node *N3;
    struct Node *N4;
    head = N1;
    second = N2;
    third = N3;
    fourth = N4;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    N1->data = 7;
    N1->next = N2;
    N1->prev = NULL;

    N2->data = 54;
    N2->next = N3;
    N2->prev = N1;

    N3->data = 45;
    N3->next = N4;
    N3->prev = N2;

    N4->data = 15;
    N4->next = NULL;
    N4->prev = N3;

    linkedListTraversal(head);
    return 0;
}