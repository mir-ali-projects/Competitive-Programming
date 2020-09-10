/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int spaces = 2*n-3;
    int stars = 1;
    int val=1;
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=stars;j++)
        {
            printf("%d\t",val);
            val++;
        }
        
        for(j=1;j<=spaces;j++)
        {
            printf("\t");
        }
        if(i==n)
        {
        stars--;
        val--;
        }
        for(j=1;j<=stars;j++)
        {
            val--;
            printf("%d\t",val);
            
        }
        stars++;
        spaces = spaces - 2;
        printf("\n");
    }
    return 0;
}
