#include <stdio.h>
void rightrotatearrayonce(int *arr,int n)
{
    int temp = arr[n-1],i;
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
void rightrotatearray(int *arr,int n,int d)
{
    int i;
    for(i=0;i<d;i++)
    {
        rightrotatearrayonce(arr,n);
    }
}
void printarray(int *arr,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    rightrotatearray(arr,8,3);
    printarray(arr,8);
}
