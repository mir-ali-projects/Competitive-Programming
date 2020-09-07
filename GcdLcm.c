#include <stdio.h>
int main()
{
    int n1,n2,copyn1,copyn2,lcm,gcd,rem;
    scanf("%d %d",&n1,&n2);
    copyn1 = n1;
    copyn2 = n2;
    while(copyn2%copyn1!=0)
    {
        rem = copyn2%copyn1;
        copyn2 = copyn1;
        copyn1 = rem;
    }
    gcd = rem;
    lcm = (n1*n2)/gcd;
    printf("%d\n%d",gcd,lcm);
    return 0;
}
