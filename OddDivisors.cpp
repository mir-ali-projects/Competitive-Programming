#include <bits/stdc++.h> 
using namespace std;
int greatestodddivisor(int);
int main()
    {
		ios_base::sync_with_stdio(false); 
        cin.tie(NULL);    
        int t,i,j,n,k,sum=0;
        cin >> t; 
        for(i=0;i<t;i++)
        {
           cin >> n >> k; 
            for(j=1;j<=n;j++)
            {
                sum = sum + greatestodddivisor(j);   
            }
            printf("%d \n",sum%k);
            sum=0;
        }
        return 0;
    }
int greatestodddivisor(int num)
    {
        int i,divisor;
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                if(i%2!=0)
                {
                    divisor=i;
                }
                else
                {
                    continue;
                }
            }
        }
        return divisor;
    }
