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
}
