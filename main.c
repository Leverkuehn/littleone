#include <stdio.h>
#include <math.h>

void printArray(int *a, int count)
{
	printf("[ ");
	for (size_t i = 0; i < count - 1; i++)
		prinf("%d, ");
	printf(" %d]\n", a[count - 1]);
}

int rand_main(int module)
{
	return rand() % module;
}

void trace_test(char **args)
{
	printf("tracing...\n");
}

int main()
{
	printf("Hello there!\n");

	return 0;
}