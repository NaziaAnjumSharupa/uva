#include<stdio.h>
void quicksort(int [],int low,int high);
void main()
{
    int i,n,a[100];

    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    }


    void quicksort(int a[],int low,int high)
    {
            int pivot,i,j,temp;
            if(low<high)
            {
                pivot=low;
                i=low;
                j=high;

    while(i<j)
    {
        while(a[i]<=a[pivot]&&i<=high)
        {
            i=i+1;
        }
        while(a[j]>a[pivot]&&j>=low)
        {
            j=j-1;
        }
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[j];
    a[j]=a[pivot];
    a[pivot]=temp;
    quicksort(a,low,j-1);
    quicksort(a,j+1,high);
    }
    }

