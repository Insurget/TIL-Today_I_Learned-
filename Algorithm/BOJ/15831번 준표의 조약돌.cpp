#pragma warning(disable:4996)
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <random>
#include <time.h>

char s[300000];
int bb[300000];

// #define R

int main()
{
	int n, b, w, ans = 0;
#ifdef R
	n = 10;
	std::srand(time(0));
	for (int i = 0; i < 10; i++)
	{
		s[i] = std::rand() % 2 == 0 ? 'B' : 'W';
	}

	b = 3; w = 2;
	printf("%s\n", s);
#else
	scanf("%d %d %d", &n, &b, &w);

	scanf("%s", s);
#endif

	int k = 1;
	bb[0] = 0;

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'B')bb[k++] = i + 1;
	}
	bb[k++] = n + 1;
	if (k <= b + 2)
	{
		int cnt = 0;
		for (int i = 0; i < n; i++)
			if (s[i] == 'W')cnt++;
		if(cnt>=w)
			printf("%d", n);
		else printf("0");
	}
	else
	{
		for (int i = b + 1; i <= k; i++)
		{
			if (bb[i] - bb[i - b - 1] - 1 - b >= w)
			{
				ans = std::max(ans, bb[i] - bb[i - b - 1] - 1);
#ifdef R
				printf("%d %d\n ans : %d\n", bb[i - b - 1], bb[i], bb[i] - bb[i - b - 1] - 1);
				for (int j = bb[i - b - 1] + 1; j <= bb[i] - 1; j++)printf("%c", s[j - 1]);
				printf("\n");
#endif
			}
		}

		printf("%d", ans);
	}
}
