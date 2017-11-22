#include <stdio.h>

#pragma warning(disable:4996)

int stick[65];
int n;

int stickmin()
{
	int i;
	for (i = 1; i <= 64; i++)
		if (stick[i])break;
	return i;
}

int sticksum()
{
	int sum = 0;
	for (int i = 1; i <= 64; i++)
		if (stick[i])sum += i*stick[i];
	return sum;
}

bool solve(int x)
{
	int sum = sticksum();
	int minstick = stickmin();
	int trashstick;
	if (sum > x)
	{
		stick[minstick]--;
		stick[minstick / 2] += 2;
		trashstick = minstick / 2;

		if (sum - trashstick >= x)stick[trashstick]--;
		return false;
	}
	return true;
}

int main()
{
	scanf("%d", &n);
	stick[64] = 1;
	while (!solve(n));
	int cnt = 0;
	for (int i = 1; i <= 64; i++)
		cnt += stick[i];
	printf("%d", cnt);
}