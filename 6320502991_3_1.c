#include<stdio.h>
int main()
{
    int i,j,n[5][4],N[5],max=0,nm=0;
    for(i=0;i<5;i++)
        for(j=0;j<4;j++)
        scanf("%d",&n[i][j]);
    for(i=0;i<5;i++)
            N[i]=0;
    for(i=0;i<5;i++)
        for(j=0;j<4;j++)
            N[i]+=n[i][j];
          max=N[0];
    for(i=0;i<5;i++)
            if(max<N[i])
            {
                max=N[i];
                nm=i;
            }

            printf("%d %d",nm+1,max);
}
