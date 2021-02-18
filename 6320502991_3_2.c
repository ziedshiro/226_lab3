#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,N[n][2];
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
        scanf("%d",&N[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            printf("%d",N[i][j]);
}
