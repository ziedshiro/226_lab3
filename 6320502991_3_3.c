#include<stdio.h>
int main()
{
    int n,i=2;
    scanf("%d",&n);
    do
    {
        if(n%i==0)
        {
            n/=i;
            printf("%d\n",i);
        }
        else if(n==1)
        {
            printf("%d",0);break;
        }

        else
        i++;
    }while(n>0);

}
