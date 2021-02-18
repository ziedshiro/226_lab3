#include<stdio.h>
int main()
{
    int n,i=2,k=0,m,x=0;
    scanf("%d",&n);
    m=n;
    do
    {
        if(m%i==0)
        {
            k++;
            m/=i;
            if(k>1)
                x=1;
        }
        else
        {
            i++;
            k=0;
        }

    }while(m>1);
    if(x==1)
        printf("%d is not a Lucky Number.",n);
    else
        printf("%d is a Lucky Number.",n);
}
