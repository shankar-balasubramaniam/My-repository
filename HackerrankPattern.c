#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,i,j,len,min;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    len=n*2-1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            min=(i<j)?i:j;
            min=(min<len-i-1)?min:len-i-1;
            min=(min<len-j-1)?min:len-j-1;
            printf("%d ",n-min);
        }
        printf("\n");
    }
    return 0;
}
