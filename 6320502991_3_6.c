#include<stdio.h>
int main()
{
    int n,i,j,k=2,x;
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
