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
    int i,j,spaces,stars;
    spaces = n/2;
    stars = 1;
    int val =1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=spaces;j++)
        {
            printf("\t");
        }
        int cval=val;
        for(j=1;j<=stars;j++)
        {printf("%d\t",cval);
          
            if(j<=stars/2)
            {
                  cval++;
            }
            else
            {
                cval--;
            }
            
        }
        if(i<=n/2)
        {
            spaces--;
            stars = stars + 2;
            val++;
        }
        else
        {
            spaces++;
            stars = stars - 2;
            val--;
        }
        printf("\n");
       
    }
    return 0;
}
