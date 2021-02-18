#include<stdio.h>
int main()
{
    int i=3,n,N,k;
    scanf("%d",&n);
    for(N=2;N<=n;N++)
    {
        for(k=2;k<=i-1;k++)
        {
         if(i%k==0)
         {
             break;
         }
        }

            printf("%d",k);

        i++;
    }


}
