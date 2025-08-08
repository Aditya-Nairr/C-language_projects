#include<stdio.h>
void merge(int a[],int first,int last,int mid);
void mergesort(int a[],int first,int last );
void main()
{
    int i,n,j,k=0,temp[k];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }    
    mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

void mergesort(int a[],int first,int last )
{
      
    if(first<last)
    {
        int mid=(first+last)/2;
        mergesort(a,first,mid);             /*Sorting the left side*/
        mergesort(a,mid+1,last);            /*Sorting the right side*/
        merge(a,first,last,mid);            /*Merging to separate array*/
    }
}

void merge(int a[],int first,int last,int mid)
{
    int temp[last];             /*Temporary array*/
    int i=first,j=mid+1,idx=first;

    while(i<=mid && j<=last)
    {
        if(a[i]<a[j])       
        {
            temp[idx]=a[i];
            i++;
            idx++;
        }
        else
        {
            temp[idx]=a[j];
            j++;   
            idx++;    
        }
    }
    while(i<=mid)                   /*for printing remaining elements*/
    {
        temp[idx]=a[i];
        idx++;
        i++;
    }
    while(j<=last)                  /*for printing remaining elements*/  
    {
        temp[idx]=a[j];
        idx++;
        j++;
    }
    for(i=first;i<=last;i++)        /*For copying all elements from temporary array to permanent array*/
    {
        a[i]=temp[i];
    }
}