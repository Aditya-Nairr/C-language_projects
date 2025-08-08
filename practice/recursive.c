#include<stdio.h>
int binary_search(int [],int search,int low,int high);
void main()
{
    int i,n,low,high,search,result;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Start Entering %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the Element to be searched:");
    scanf("%d",&search);
    low=0;
    high=n-1;
    result=binary_search(arr,search,low,high);
    if(result == 1)
    {
        printf("Successful! Element is present in the array!!\n");
    }
    else
    {
        printf("Element is not present in the array!!\n");
    }
}
int binary_search(int arr[],int search,int low,int high)
{
    int mid,flag=0;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(arr[mid]==search)
        {
            flag++;
            return flag;
            break;
        }
        else if(arr[mid]<search)
        {
            return binary_search(arr,mid+1,high,search);
        }
        else
        {
            return binary_search(arr,low,mid-1,search);        
        }
    }
}