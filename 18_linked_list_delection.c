#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Elements :%d \n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *deleteAtFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteANodeInBtween(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *ptr = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        ptr = ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
    return head;
}

struct Node *deleteLastNode(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    return head;
}

struct Node *deleteByValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
        return head;
    }
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 1;
    fourth->next = NULL;

    linkedlistTraversal(head);
    printf("After delection \n");
    // head = deleteAtFirst(head);
    // head = deleteANodeInBtween(head,2);
     head = deleteLastNode(head);
    //head = deleteByValue(head,3);

    linkedlistTraversal(head);

    return 0;
}