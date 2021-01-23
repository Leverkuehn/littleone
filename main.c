#include <stdio.h>

void printArray(int *a, int count)
{
	printf("[ ");
	for (size_t i = 0; i < count - 1; i++)
		prinf("%d, ");
	printf(" %d]\n", a[count - 1]);
}

int rand_main()
{
	return 1;
}

int main()
{
	printf("Hello!\n");

	return 0;
}