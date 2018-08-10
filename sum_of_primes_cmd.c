#include<stdio.h>
int main(int argc,char *argv[])
{
    int n1,n2,i,j,sum=0,p;
    n1=atoi(argv[1]);
    n2=atoi(argv[2]);
    for(i=n1;i<=n2;i++)
    {
        p=1;
        if(i!=1)
        {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                p=0;
                break;
            }
        }
        if(p==1)
            sum+=i;
        }    
    }
    printf("%d",sum);
    return 0;
}
