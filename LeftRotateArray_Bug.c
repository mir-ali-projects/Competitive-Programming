#include <stdio.h>
void LeftArrayRotateOnce(int *arr, int n)
{
	int temp = arr[0],i;
	for(i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[i]=temp;
}
void LeftArrayRotate(int *arr,int n,int d)
{
	int i;
	for(i=0;i<d;i++)
	{
		 LeftArrayRotateOnce(arr,n);
	}
}
void printArray(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

int main()
{
	int arr[]={1,2,3,4,5,6,7};		
	LeftArrayRotateOnce(arr, 7);
	LeftArrayRotate(arr,7,2);
	printArray(arr,7);
	return 0;	
}
