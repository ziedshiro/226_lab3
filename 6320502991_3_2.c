#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k,i,j,N[n][2],K[48],max=0,km=0;
    for(i=0;i<48;i++)
        K[i]=0;
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
        scanf("%d",&N[i][j]);
    for(k=0;k<48;k++)
    {
        for(i=0;i<n;i++)
                    if(N[i][0]==k+1)
                    {
                        K[k]+=N[i][1];
                    }
    }


    max=K[0];
    for(i=0;i<48;i++)
        if(max<K[i])
    {
        max=K[i];
        km=i;
    }
    printf("%d %d",km+1,max);
}
