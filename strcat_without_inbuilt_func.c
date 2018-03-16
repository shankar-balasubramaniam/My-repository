#include<stdio.h>
int main()
{
	char s1[50],s2[50];
	printf("Enter two strings:\nString1:");
	gets(s1);
	printf("String2:");
	gets(s2);
	printf("%s%s",s1,s2);
	return 0;
}

