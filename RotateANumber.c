#include <stdio.h>
#include <math.h>
int noofdigits(int num)
{
    int count = 0;
    while(num>0)
    {
        num = num/10;
        count  = count + 1;
    }
    return count;
}
int main()
{
    int n,r,i,d,newnumber;
    scanf("%d %d",&n,&r);
     r = r%noofdigits(n);
    if(r<0)
    {
        r = r + noofdigits(n);
    }
    newnumber = (int)(pow(10,noofdigits(n) - r))*(n%(int)pow(10,r)) + n/(int)pow(10,r);
    printf("%d",newnumber);
}
