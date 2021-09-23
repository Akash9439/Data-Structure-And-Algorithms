#include<stdio.h>
void swap(int* a, int* b);
void swap(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void sort(int a[],int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        switch(a[mid])
        {
        case 0:
            swap(&a[low++],&a[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&a[mid],&a[high--]);
            break;
        }
    }
}
void printarray(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void main()
{
    int a[]={0,1,0,1,2,0,2,1,0};
    int n = sizeof(a)/sizeof(a[0]);
    int i;
    sort(a,n);
    printarray(a,n);
}
