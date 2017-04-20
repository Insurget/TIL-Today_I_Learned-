#include <stdio.h>

int main(void)
{
	char n[100] = { 0 };

	scanf("%s", n);
	for (int i = 0, j = 0; n[i] != '\0'; i++, j++)
	{
		if (j == 10) {
			printf("\n"); j = 0;
		}
		printf("%c", n[i]);
	}
}