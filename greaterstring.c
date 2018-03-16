#include<stdio.h>
int main()
{
	char s1[50],s2[50];
	int i,val1=0,val2=0;
	printf("Enter two strings:\nString1:");
	gets(s1);
	printf("String2:");
	gets(s2);
	for(i=0;i!='\0';i++)
	{
		val1+=s1[i];
	}	
	for(i=0;i!='\0';i++)
	{
		val2+=s2[i];
	}
	if(val1>val2)
	printf("%s",s1);
	else
	printf("%s",s2);
	return 0;
}

