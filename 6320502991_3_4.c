#include<stdio.h>
int main()
{
    int i=2,n,N,k;
    scanf("%d",&n);
    int x[n+1];
    for(N=2;N<=n;N++)
    {
        for(k=2;k<=i;k++)
         if(i%k==0)
         {
             break;
         }
        if(k==i)
            x[N]=i;
        i++;
    }
    if(x[n]==n)
        printf("%d",n);
    else
        printf("%d",x[n-1]);

}
