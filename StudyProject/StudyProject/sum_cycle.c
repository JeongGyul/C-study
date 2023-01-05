// 백준 1110번
#include <stdio.h>
int main(void)
{
	int num, cycle, f_front, f_back, s_back, count = 0;
	scanf("%d", &num);

	if (num < 10)
	{
		cycle = num * 10;
		num = cycle;
	}
	else
		cycle = num;

	do
	{
		f_front = cycle;
		f_back = cycle;

		if ((f_front % 10) == 0)
			f_front /= 10;
		else
		{
			while ((f_front % 10) != 0)
			{
				f_front--;
			}
			f_front /= 10;
		}

		while (f_back >= 10)
			f_back -= 10;

		s_back = f_front + f_back;
		while (s_back >= 10)
			s_back -= 10;
		cycle = (f_back * 10) + s_back;
		count++;
		//printf("f_front: %d, f_back: %d, s_back: %d\n", f_front, f_back, s_back);
		//printf("새로운 수: %d, 현재 사이클: %d\n", cycle, count);
	} while (cycle != num);
	printf("%d", count);

}