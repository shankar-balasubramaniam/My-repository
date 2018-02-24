#include<stdio.h>
int main()
{int a[3],i,max=0;
for(i=0;i<3;i++)
	{scanf("%d",&a[i]);
	}
for(i=0;i<3;i++)
	{if(a[i]>max)
		max=a[i];
		}	
printf("%d is greatest",max);
return 0;		
}
