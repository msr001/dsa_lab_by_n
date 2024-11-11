#include <stdio.h>
#include <stdlib.h>
#define size 20
int q[size];

int rear = -1, front = 0;
int item;
void enQueue()
{
    if (rear == size - 1)
    {
        printf("Queue over flow \n");
    }
    else
    {
        printf("Enter the item into array\n");
        scanf("%d", &item);
        rear++;
        q[rear] = item;
    }
}

void deQueue()
{
    if (rear == front -1)
    {
        printf("Queue underflwo\n");
    }
    else if (rear == front)
    {
        printf("This is the last elemetn of queue%d \n", q[front]);
        front = 0;
        rear = -1;
    }
    else
    {
        printf("Deleted element form queue is %d\n", q[front]);
        front++;
    }
}
void display()
{
    int i;
    if (rear == front - 1)
    {
        printf("Queue underflow\n");
    }
    else
    {
        printf("Entered elemnts of the queue are \n->");
        for (i = front; i <= rear; i++)
        {
            printf("%d \t", q[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choise;
    while (1)
    {
        printf("1.Enqueue\n2.Dequeue\n3.display\n4.exit\n");
        printf("Enter your choise\n");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        }
    }
    return 0;
}