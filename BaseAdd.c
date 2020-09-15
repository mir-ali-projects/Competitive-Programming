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
int basesub(int n1 , int n2 , int b )
{ 
    int returnvalue = 0,sub=0,i=0, carry = 0;
    while(n2>0)
    {
        int d1 = n1%10;
        int d2 = n2%10;
        n1 = n1/10;
        n2 = n2/10;
        d2 = d2 + carry;
    
        if(d2>=d1)
        {
            carry = 0;
            sub = d2 - d1;
        }
        else
        {
            carry = -1;
            sub = ( d2 + b ) - d1;
        }
        returnvalue =  returnvalue + sub*exponent(10,i);
        i++;
    }
    return returnvalue;
}
int main()
{
    int x = 3;
    printf("%d",basesub(256,1212,8));
    return 0;
}
