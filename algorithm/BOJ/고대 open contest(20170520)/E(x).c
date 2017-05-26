#include <stdio.h>
#include <string.h>

char n1[20][20];

int main(void)
{
	char n[100];
	scanf("%s", n);
	int a;
	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%s", n1[i]);
	}
	int t = 0;
	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < strlen(n); j++)
		{
			if (n[j] == 'z')n[j] = 'a';
			else n[j]++;
		}
		for (int k = 0; k < a; k++)
		{
			if (strstr(n, *(n1 + k)))
			{
				printf("%s", n); goto stop;
			}
		}
	}
stop:
	return 0;
}