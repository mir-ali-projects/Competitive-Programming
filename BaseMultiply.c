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
int singledigitproduct(int n1,int digit2,int b)
{
    int returnvalue = 0,product,carry=0,i=0;
    while(n1>0 || carry>0)
    {
        int digit1 = n1%10;
        n1  = n1/10;
        product = digit1 * digit2 + carry;
        carry = product/b;
        product = product%b;
        returnvalue = returnvalue + product * exponent(10,i);
        i++;
    }
    return returnvalue;
}
int fullproduct(int n1,int n2,int b)
{ int returnvalue=0,i=0,sdp;
    while(n2>0)
    {
        int digit2 = n2%10;
        n2 = n2/10;
        sdp = singledigitproduct(n1,digit2,b);
        returnvalue = baseadd(b,sdp*exponent(10,i),returnvalue); 
        i++;
    }
    return returnvalue;
}
int main()
{
  
    int b,n1,n2;
    scanf("%d %d %d",&b,&n1,&n2);
    printf("%d",fullproduct(n1,n2,b));
    return 0;
}
