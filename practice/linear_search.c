#include<stdio.h>
void main()
{
    int n,search,i,flag=0;;
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
    for(i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            printf("Successful! Element is present in the array!!\n");
            flag++;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element is not present in the array!!\n");
    }
}