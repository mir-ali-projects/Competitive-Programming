#include <stdio.h>
int exponent(int,int);
int powercycle(int);
int main()
{
    int n,a,b,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
{
    scanf("%d %d",&a,&b);
    if(a==0 && b==0)
    {
        printf("%d\n",1);
        continue;
    }
    if(b%powercycle(lastdigit(a))==0)
    {
    printf("%d\n",lastdigit(exponent(lastdigit(a),powercycle(lastdigit(a))+b%(powercycle(lastdigit(a))))));
    }
    else
    {
        printf("%d\n",lastdigit(exponent(lastdigit(a),b%(powercycle(lastdigit(a))))));
    }
}
    return 0;
}
int exponent(int num,int e)
{
    int count=1,i=1;
    while(i<=e)
    {
        count = count*num;
        i++;
    }
    return count;
}
int powercycle(int a)
{
    int a1=a%10, arr[10],i=1; 
    arr[0]=a1;
    do
    {
        arr[i]=a1;
        a1 = (a1*a)%10;
        if(binarySearch(arr,0,i-1,a1)!=-1)
        {
            break;
        }
      
        i++;
    } while(1);
    return i;
}
int lastdigit(int n)
{
    return n%10;
}
int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
    if (arr[mid] == x) 
            return mid; 
    if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
  
        return binarySearch(arr, mid + 1, r, x); 
    } 
  
    return -1; 
} 
  
