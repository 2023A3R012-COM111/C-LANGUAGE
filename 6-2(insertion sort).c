#include<stdio.h>
void insertionsort (int arr[], int n)
{
    int i, key, j;
    //traverse through the array
    for(i = 1; i<n; i++)
    {
        key = arr[i];//Select the current element to be inserted
        //move element of arr[0..i-1] that are greater than key to one
        j = i-1;
        while(j>=0 &&arr[j]>key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key; // Insert key at its correct position
    }
}
int main()

{
    int n;
    //Input the size of the array
    printf("Enter the size of the array");
    scanf("%d",&n);
    //Declare an array of size n
    int arr[n];
    //Input element of the array
    printf("Enter %d element:\n", n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    //call the insertion sort function
    insertionsort(arr,n);
    //Output the sorted array
    printf("sorted array:");
    for(int i = 0; i<n; i++)
    {
        printf("\t%d\t",arr[i]);
    }
    return 0;
}
