#include<stdio.h>
void main()
{
    int i,n,low,mid,high,search,flag=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Start Entering %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Element to be searched:");
    scanf("%d",&search);
    low=0;
    high=n-1;
    while(low<=high)
    { 
        mid=(low+high)/2;
        if(a[mid]==search)
        {
            printf("Successful! Element is present in the array!!\n");
            flag++;
            break;
        }
        else if (a[mid]<search)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag==0)
    {
        printf("Element is not present in the array!!\n");
    }
}