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
    int spaces = 0;
    int stars = n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=spaces;j++)
        {
            printf("\t");
        }
        for(j=1;j<=stars;j++)
        {
            if((i>1)&&(i<=n/2)&&(j>1)&&(j<stars))
            {
                printf("\t");
            }
            else
            {
            printf("*\t");
            }
                
        }
        for(j=1;j<=spaces;j++)
        {
            printf("\t");
        }
        
        if(i<=n/2)
        {
            spaces++;
            stars=stars - 2;
        }
        else
        {
            spaces--;
            stars = stars + 2;
        }
        printf("\n");
    }
   
    return 0;
}
