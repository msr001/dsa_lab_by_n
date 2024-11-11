#include<stdio.h>

void bubblesort(int arr[],int size)
{
    int pass,temp,j;
    for(pass =1;pass<size;pass++)
    {
        for (j=0;j<=size-pass-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i,arr[20],size;
    printf("Enter the number of elements \n");
    scanf("%d",&size); 
    printf("Enter the elements into array\n");   
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,size);
    printf("Array after sorting is \n");
    for(i=0;i<size;i++)
    {
        printf("%d \t",arr[i]);
    }
    return 0;
}