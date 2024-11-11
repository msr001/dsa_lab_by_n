#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};


void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)

    {
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->next;
    }
}


struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *frouth;
    // Allocates memory for nodes in the head memory in the linked list;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    frouth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 89;
    second->next = third;

    third->data = 90;
    third->next = frouth;

    frouth->data = 45;
    frouth->next = NULL;

    printf("Linked list after insertion \n");
    linkedListTraversal(head);
    // head = insertAtFirst(head,56);
    // head = insertAtIndex(head, 56, 1);
     head = insertAtEnd(head, 56);

    printf("Linked list after insertion \n");
    linkedListTraversal(head);

    return 0;
}