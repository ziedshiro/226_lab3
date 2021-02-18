#include<stdio.h>
int main()
{
    int n,i=2,k;

    scanf("%d",&n);
    do
    {
        if(n%i==0)
            k++;
        else
            i++;
    }while(n>1);

}
