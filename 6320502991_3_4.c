#include<stdio.h>
int main()
{
    int n,k=2;
    scanf("%d",&n);
     do
    {
        if(n%k==0)
            n--;
        else
            k++;
    }while(n!=k);
    printf("%d",n);

}
