#include <stdio.h>
int main(void)
{
	int i = 10;
	int* pi = &i;

	printf("%d %p\n", i, pi);
	(*pi)++;
	printf("%d %p\n", i, pi);

	printf("%d %p\n", i, pi);
	//*pi++;
	printf("%d %u\n", i, *pi++);

	printf("%p", pi);

	return 0;

}