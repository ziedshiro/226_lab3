#include<stdio.h>
int main()
{
    int i,j,n[5][4];
    for(i=0;i<5;i++)
        for(j=0;j<4;j++)
        scanf("%d",&n[i][j]);
    for(i=0;i<5;i++)
        for(j=0;j<4;j++)
            printf("%d",n[i][j]);
}
