
#include <stdio.h>
#include <math.h>
int main()
{
    
    int digit;
    scanf("%d",&digit);
    int n=7852,p=2,k=count(n),j=1;
    int *i = (int *)malloc(k*sizeof(int));
    while(j<=k)
    {
        i[j] = n/exponent(10,k-j);
        printf("%d \n",i[j]);
        n= n%exponent(10,k-j); 
        j++;
    }
      
    j=1;
    int sum=0,nine=9;
    while(j<=k)
    {
       if (j==digit)
        {
            i[j]=nine;
            
        }
        sum = sum + i[j]*exponent(10,k-j);
        j++;
    }
    printf("%d",sum);
    return 0;
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
