#include <stdio.h>
void insertionSortDesc(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)//i==pass hai
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void selectionSortDesc(int arr[], int n)
{
    int i, j, max_index;

    for (i = 0; i < n - 1; i++)
    {
        max_index = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[max_index])
            {
                max_index = j;
            }
        }

        if (max_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp;
        }
    }
}
int main()
{
    int arr[20];
    int size;
    int i;
    printf("Enter the size\n");
    scanf("%d", &size);

    printf("Enter the elemetns\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertionSortDesc(arr, size);
    // selectionSortDesc(arr,size);
    printf("Array after sorting\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}