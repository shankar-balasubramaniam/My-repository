#include<stdio.h>
int main()
{int i,j;
for(i=1;i<=5;i++)
	{
	for(j=1;j<=5;j++)
	{if(i==1||j==1||i==5||j==5||i==j||i==j/2||j==i/2)
		printf("*\t");
	else
		printf("\t");	
	}
	printf("\n");}
	return 0;
}
