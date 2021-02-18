#include<stdio.h>
int main()
{
    int n,i,k=2,rn=1,N;
    scanf("%d",&n);
    do
    {
        k=2;
        rn=1;
    do
    {
        if(n%k==0)
            n--;
        else
            k++;
    }while(n!=k);
    N=n;

    do
    {
    i=N%10;
    rn=(rn*10)+i;
    N/=10;
    }while(N>0);

    if(n!=rn)
        n--;
    else
    {
        printf("%d",n);break;
    }

    }while(1);

}
