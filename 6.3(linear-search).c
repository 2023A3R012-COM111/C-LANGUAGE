#include<stdio.h>
int linearsearch(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i; //Element found, return  its index
        }
    }
    return -1; // element not found
}
int main()
{
    int size, key;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d element:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    //Input the element to be searched
    printf("enter the element to search:");
    scanf("%d",&key);
    //perform linearsearch

    int result = linearsearch(arr, size,key);
    //Display the result

    if (result != -1)
    {
        printf("Element %d found at index %d.\n",key, result);

    }
    else
    {
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}
