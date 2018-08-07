#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int *total_number_of_books;
int **total_number_of_pages;
int main ()
{
  int total_number_of_shelves;
  scanf ("%d", &total_number_of_shelves);

  int total_number_of_queries;
  scanf ("%d", &total_number_of_queries);

  if ((total_number_of_shelves < 1) || (total_number_of_shelves > 100000))
    return -1;

  if ((total_number_of_queries < 1) || (total_number_of_queries > 100000))
    return -1;

  total_number_of_books =
    (int *) malloc (sizeof (int) * total_number_of_shelves);
  total_number_of_pages =
    (int **) malloc (sizeof (int *) * total_number_of_shelves);
  *total_number_of_pages = (int *) malloc (sizeof (int));

  memset (total_number_of_books, 0, total_number_of_shelves);

  while (total_number_of_queries--)
    {
      int type_of_query;
      scanf ("%d", &type_of_query);
      if (type_of_query == 1)
	{
	  /*
	   * Process the query of first type here.
	   */
	  int x, y;
	  scanf ("%d %d", &x, &y);

	  int book = total_number_of_books[x];

	  total_number_of_pages[x] =
	    (int *) realloc (total_number_of_pages[x],
			     sizeof (int) * (book + 1));
	  total_number_of_pages[x][book] = y;

	  total_number_of_books[x] += 1;
	}
      else if (type_of_query == 2)
	{
	  int x, y;
	  scanf ("%d %d", &x, &y);
	  printf ("%d\n", *(*(total_number_of_pages + x) + y));
	}
      else
	{
	  int x;
	  scanf ("%d", &x);
	  printf ("%d\n", *(total_number_of_books + x));
	}
    }
  if (total_number_of_books)
    {
      free (total_number_of_books);
    }
  for (int i = 0; i < total_number_of_shelves; i++)
    {
      if (*(total_number_of_pages + i))
	{
	  free (*(total_number_of_pages + i));
	}
    }
  if (total_number_of_pages)
    {
      free (total_number_of_pages);
    }
  return 0;
}
