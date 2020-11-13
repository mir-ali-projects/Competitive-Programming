
#include <stdio.h>
#include <stdlib.h>
 struct element
    {
      int data;
      int index;
    };
void merge(struct element *arr, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    /* create temp arrays */
    struct element *L = (struct element *) malloc(sizeof(struct element)*n1); 
    struct element *R = (struct element *) malloc(sizeof(struct element)*n2);
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) { 
        if (L[i].data <= R[j].data) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(struct element *arr, int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
}
int binarysearch(struct element *arr,int l,int r,int x)
{
    if(l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid].data==x)
        {
            return arr[mid].index;
        }
        if(x<arr[mid].data)
        {
            return binarysearch(arr,l,mid-1,x);
        }
        if(x>arr[mid].data)
        {
            return binarysearch(arr,mid+1,r,x);
        }
    }
    return -1;
}
int main()
{
   
    int n;
    scanf("%d",&n);
    struct element *arr = (struct element *)malloc(sizeof(struct element)*n);
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i].data);
        arr[i].index = i;
    }
    mergeSort(arr,0,n-1);
    int max = arr[n-1].data;
    for(i=max;i>=1;i--)
    {
        for(j=0;j<n;j++)
        {
            if(arr[arr[j].index].data>=i)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }
    return 0;
}
