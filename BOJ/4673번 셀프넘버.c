#include <stdio.h>

int check[10000];

int d(int n)
{
	int digit_sum = n;
	int i;
	for (i = 0; n != 0; i++)
	{
		digit_sum += n % 10;
		n /= 10;
	}
	check[digit_sum] = 1;
}

int main(void)
{
	for (int i = 1; i < 10000; i++)
	{
		d(i);
	}
	for (int i = 1; i < 10000; i++)
	{
		if (check[i] == 0)printf("%d\n", i);
	}
}