#include <stdio.h>
#include<stdlib.h>
int bSearch(int arr[], int size, int lookingFor)
{
    int low = 0;
    int high = size - 1;
    int mid, i;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == lookingFor)
        {
            return mid;
        }
        else if (lookingFor > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}

int lSearch(int arr[], int size, int lookingFor)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == lookingFor)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);
    int search, i;
    int choise;

    printf("Enter your elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched\n");
    scanf("%d", &search);
    while (1)
    {
        
        printf("1.Binary search\n");
        printf("2.Lineary search\n");
        printf("3.Abort\n");
        printf("Enter your choise\n");
        scanf("%d",&choise);

        switch (choise)
        {
        case 1:

            if (bSearch(arr, n, search))
            {
                printf("Element %d found at index %d\n", search, bSearch(arr, n, search));
            }
            else
            {
                printf("Element not found\n");
            }
            break;
        case 2:
                if(lSearch(arr,n,search))
                {
                    printf("Element %d found at index %d\n",search,lSearch(arr,n,search));
                }
                else
                {
                    printf("Element not found\n");
                }
                break;
        case 3: exit(0);
        }
    }
    return 0;
}