#include<stdio.h>
int main()
{
char a;
printf("Enter a letter:");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
 {
 printf("Vowel");
 }
else
 {
 printf("Consonant");
 }
return 0; 
}
