#include <stdio.h>

int main()
{
    int arr[] = {10,20,30,40,50,80};
    int i,j,query,mid,result=-1,high,low;
    i=0;
    j = (sizeof(arr)/sizeof(int))-1;
    scanf("%d",&query);
    while(i<=j)
    {
        mid = i + (j-i)/2;
        if(query>arr[mid])
        {
            i= mid + 1;
            low = arr[i];
        }
        else      
        {
            j = mid - 1;
            high = arr[j];
        
        }
        if(query==arr[mid])
        {
            result = mid;
        }
     
    }
    
    printf("%d %d",high,low);
    return 0;
}
