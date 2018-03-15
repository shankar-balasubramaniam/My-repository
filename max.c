#include<stdio.h>
int
main ()
{
  int n[10], i, temp;
  printf ("Enter 10 numbers:\n");
  for (i = 0; i < 10; i++)
    {
      scanf ("%d", &n[i]);
    }
  temp = n[0];
  for (i = 1; i < 10; i++)
    {
      if (n[i] > temp)
	temp = n[i];
    }
  printf ("The maximum no. is %d", temp);
  return 0;
}
