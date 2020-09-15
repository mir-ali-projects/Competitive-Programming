
#include <stdio.h>
int exponent(int num,int e)
{
    int count = 1 ; 
    while(e>0)
    {
        count  = count * num;
        e--;
    }
    return count;
}
int baseadd(int b,int n1,int n2)
{
    int returnvalue = 0,i=0;
    int carry = 0;
   
    int sum = 0;
    while(n1>0||n2>0||carry>0)
    {
         int digit1 = n1%10;
    int digit2 = n2%10;
        sum = digit1 + digit2 + carry;
        carry = sum/b;
        sum = sum%b;
        returnvalue = returnvalue + sum*exponent(10,i);
        n1 = n1/10;
        n2 = n2/10;
        i++;
        
    }
    return returnvalue;
}
int main()
{
    int b,n1,n2;
    scanf("%d %d %d",&b,&n1,&n2);
    printf("%d",baseadd(b,n1,n2));

    return 0;
}
