#include <stdio.h>
void main()
{
    int i, j, n,temp;
    printf("Enter size of the array:");
    scanf("%d", &n);
    int arr[n];
    /*Accepting the Array*/
        printf("Start Entering the Elements\n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);   /*1,4,5,2*/
        }             

    /*Insertion Sort Logic*/
        for (i = 1; i < n; i++)
        {
            temp = arr[i];      /*2*/
            j = i - 1;          /*0,1,2*/
            while (j >= 0 && arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }   

    /*For printing the Sorted Array*/
        printf("After Sorting The Elements are:\n");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", arr[i]);
        }
}