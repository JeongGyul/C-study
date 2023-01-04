// น้มุ 11720น๘
#include <stdio.h>
int main(void)
{
	int count, i, sum = 0;
	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		int num;
		scanf("%1d", &num);
		sum += num;
	}
	printf("%d", sum);
}