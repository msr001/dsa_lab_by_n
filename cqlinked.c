#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<conio.h>
struct Node *front=NULL;
struct Node *rear=NULL;


struct Node
{
    int data;
    int link;
};


void qinsert(int data)
{
    struct Node *newnode;
    newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->link=NULL;
    if(front == NULL&&rear==NULL)
    {
        front = rear = newnode;
        rear->link=front;
    }
    else
    {
        rear ->link = newnode;
        rear = newnode;
        rear ->link=front;
    }

}

void qdelete()
{
    struct Node *ptr;
    ptr=front;
    if(front==NULL&&rear==NULL)
    {
        printf("queue is empty\n");
    }
    else if(front == rear)
    {
        front = rear =NULL;
	printf("%d is deleted \n",ptr->data);
        free(ptr);
    }
    else
    {
        front = front ->link;
        rear->link = front;
        printf("%d is deleted\n",ptr->data);
        free(ptr);
    }
}

void qdisplay()
{
    struct Node *ptr;
    ptr=front;
    if(front==NULL&&rear==NULL)
    {
        printf("queue underflow\n");
    }
    else
    {
        do
        {
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }while(ptr!=front);
    }
}
void main(){
  //clrscr();
   qdelete();
    qinsert(12);
    qinsert(13);
    qinsert(14);
    qinsert(15);

    qdisplay();
    qdelete();
    qdelete();
    qdelete();
    qdelete();
    qdelete();

    
   // getch();
}