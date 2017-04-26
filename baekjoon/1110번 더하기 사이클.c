#include <stdio.h>

int main(void)
{
	int s;
	scanf("%d", &s);
	int result = s, total = 0;
	do
	{
		result = result % 10 * 10 + (result / 10 + result % 10) % 10;
		total++;
	} while (result^s);

	printf("%d", total);
}
/*do	상세한 풀이
{
	ten = result / 10;
	one = result % 10;
	sum = (ten + one) % 10;
	printf("ten : %d, one : %d, sum : %d, ", ten, one, sum);
	ten = one;
	one = sum;
	result = ten * 10 + one;
	printf("result : %d\n", result);
	total++;
} while (s != result||total==1);
*/