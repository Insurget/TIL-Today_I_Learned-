#include <stdio.h>

int cng[16], t;

int Pp(int x, const int p)
{
	if (x < p) {
		cng[t] = x; return;
	}
	else {
		cng[t++] = x%p;
		return Pp(x / p, p);
	}
}

int main(void)
{
	int n=32766,n2;
	do
	{
		system("cls");
		printf("32765������ 10���� ������ �Է��ϼ���\n\t:");
		scanf("%d", &n);
	}while (n > 32765);

	while (1)
	{
		printf("�ٲ� ������ �Է����ּ���.\n\t:");
		scanf("%d", &n2);
		if (n2 <= 16)break;
		else printf("2~16���� �Է��� �����մϴ�."); system("cls");
	}

	Pp(n, n2);

	for (; t >= 0; t--)
		printf("%d", cng[t]);
}