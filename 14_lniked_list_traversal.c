#include <stdio.h>
#include <stdlib.h> //For using null

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)

    {
        printf("Elements : %d", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    // Allocates memory for nodes in the head memory in the linked list;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 89;
    second->next = third;

    third->data = 90;
    third->next = NULL;

    linkedListTraversal(head);

    return 0;
}