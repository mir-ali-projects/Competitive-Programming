
#include <stdio.h>

int main()
{
    
    int n,k,i=1;
    scanf("%d %d",&n,&k);
    while(i<=k)
    {
        n = digitchange(n,i);
        i++;
    }
    printf("%d",n);
    return 0;
}
int digitchange(int n,int position)
    {
       int k =count(n),j=1;
        int *i = (int *)malloc(k*sizeof(int));
    while(j<=k)
    {
        i[j] = n/exponent(10,k-j);
        n= n%exponent(10,k-j); 
        j++;
    }
      
    j=1;
    int sum=0;
    while(j<=k)
    {
       if (j==position)
        {
            i[j]=9;
            
        }
        sum = sum + i[j]*exponent(10,k-j);
        j++;
    }
    return sum;
    }
int count(int n)
    {
        int i=0;
            while(n>0)
            {
                n=n/10;
                i++;
            }
            return i;
    }
int exponent(int n,int k)
{
    int count =1;
  while(k>0)
  {
  count = count*n;
  k--;
  }
  return count;
}
