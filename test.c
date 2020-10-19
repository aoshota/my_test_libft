#include <stdio.h>
#include <limits.h>

int main()
{
	long x = (long)INT_MAX + 1;
	printf("\n LONG_MAX = %ld\n",LONG_MAX);
	printf(" LONG_MIN = %ld\n",LONG_MIN);
	printf("\n (int)LONG_MAX = %d\n",(int)LONG_MAX);
	printf(" (int)LONG_MIN = %d\n",(int)LONG_MIN);

	printf("\n INT_MAX = %d\n", INT_MAX);
	printf(" INT_MAX + 1 = %d\n\n", (int)x);

  char *p1 = "\0";
  char *p2;

  p2 = NULL;

  if (!*p1)
    printf("\n p1 = %p\n", p1);
  if (!p2)
    printf(" p2 = %p\n\n", p2);
}
