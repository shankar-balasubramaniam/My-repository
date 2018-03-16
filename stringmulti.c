#include<stdio.h>
int main()
{
	int n,i;
	char s[100];
	printf("Enter a string:");
	gets(s);
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("%s\n",s);	
	}
	return 0;
}
