
#include <stdio.h>
#include <stdlib.h>
struct element
{
    int data;
    int index;
 
};
void merge(struct element *arr , int l , int m, int r)
{   
    int n1,n2,i,j,k;
    n1 = m - l + 1;
    n2 = r - m;
    struct element *L = (struct element *)malloc(sizeof(struct element)*n1);
    struct element *R = (struct element *)malloc(sizeof(struct element)*n2);
    for(i=0;i<n1;i++)
    {
        L[i] = arr[l + i];
    }
        for(j=0;j<n2;j++)
    {
        R[j] = arr[m + 1 + j];
    }
    i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i].data <= R[j].data)
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergesort(struct element *arr,int l,int r)
{
    if(l<r)
    {
        int m = l + (r-l)/2 ;
        mergesort(arr,l,m);
        mergesort(arr,m + 1,r);
        merge(arr,l,m,r);
    }
}
    

int first(struct element *arr, int low, int high, int x, int n) 
{ 
    if (high >= low) { 
        int mid = low + (high - low) / 2; 
        if ((mid == 0 || x > arr[mid - 1].data) && arr[mid].data == x) 
            return mid; 
        else if (x > arr[mid].data) 
            return first(arr, (mid + 1), high, x, n); 
        else
            return first(arr, low, (mid - 1), x, n); 
    } 
    return -1; 
} 
int last(struct element *arr, int low, int high, int x,int n) 
{ 
    if (high >= low) { 
        int mid = low + (high - low) / 2; 
        if ((mid == n - 1 || x < arr[mid + 1].data) && arr[mid].data == x) 
            return mid; 
        else if (x < arr[mid].data) 
            return last(arr, low, (mid - 1), x, n); 
        else
            return last(arr, (mid + 1), high, x, n); 
    } 
    return -1; 
} 
int main()
{
    
    int n;
    scanf("%d",&n);
    struct element *arr = (struct element *)malloc(sizeof(struct element)*n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i].data);
        arr[i].index = i;
    }
    printf("\n");
    int x;
    scanf("%d",&x);
    mergesort(arr,0,n-1);
    for(i=first(arr,0,n-1,x,n);i<=last(arr,0,n-1,x,n);i++)
    {
        printf("\n%d",arr[i].index);
        
    }
    
    return 0;
}
