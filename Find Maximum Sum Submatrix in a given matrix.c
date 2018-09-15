#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,k,sum[10][10],pi,pj,mi,mj,max=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    scanf("%d",&k);
    for(pi=0;pi<(r-k+1);pi++)
    {
        for(pj=0;pj<(c-k+1);pj++)
        {
        sum[pi][pj]=0;
        for(i=pi;i<(k+pi);i++)
        {
            for(j=pj;j<(k+pj);j++)
                sum[pi][pj]+=a[i][j];
        }
        }
    }
    for(i=0;i<(r-k+1);i++)
    {
        for(j=0;j<(c-k+1);j++)
        {
            if(sum[i][j]>max)
            {
                max=sum[i][j];
                mi=i;
                mj=j;
            }
        }
    }
    for(i=mi;i<(k+mi);i++)
    {
        for(j=mj;j<(k+mj);j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
