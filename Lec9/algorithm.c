#include <stdio.h>
#include <stdlib.h>

void scan(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("Enter your %d number\n",i+1);
        scanf("%d",&arr[i]);
    }
}

void display(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("the %d number is\n ",i+1);
        printf("%d\n",arr[i]);
    }
}

void linear_search(int arr[],int n,int x)
{
    for (int i=0;i<n;i++)
    {
        if (arr[i]==x)
        {
           printf("number %d is in index %d\n",x,i);
           return 0;
        }

    }
    printf("number not found\n");

return 0;
}

void Binary_searsh(int arr[],int l,int r,int y)
{ int m=0;
    while(l<=r)
    {
        m=(l+r)/2;
        if (arr[m]<y)
        {
            l=m+1;

        }
        if  (arr[m]>y)
        {
            r=m-1;

        }
        if  (arr[m]==y)
        {
            printf("x was found in %d index",m);
            return 0;
        }

    }

        printf("not found");
    return 0;
}

void swape(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

void selection_sorting(int arr[],int n)
{
    int i,j,min_index;
    for(i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1;j<n;j++)
            if (arr[j]<arr[min_index])
                min_index=j;

        swape(&arr[min_index],&arr[i]);
    }
}


void Bubble_sorting(int arr[],int n){

int i,j,swapped=0;

for (i=0;i<n-1;i++)
{
    swapped =1;
    for(j=0;j<n-i-1;j++)
    {
        if (arr[j]>arr[j+1])
        {
            swape(&arr[j],&arr[j+1]);
        swapped=1;
        }
    }
    if (swapped==0)
{
    break;
}
}


}



