#include <stdio.h>

int cng[16], t;	//t는 배열이 어디까지 진행되었는지를 나타냅니다.
	//2진수의 16비트까지만 담기 위해서 변경된 숫자를 저장할 배열cng를 크기 16으로 생성했습니다.

int f(const int x, const int n);	//진법 변환에 사용할 함수 f입니다.

int main(void)
{
	int n=32765, n2;	//16비트 2진수의 최대 크기인 32765입니다. n2는 바꾸고 싶은 진법을 받습니다.
	do
	{
		system("cls");
		printf("32765이하의 10진수 정수를 입력하세요\n\t:");
		scanf("%d", &n);
	}while (n > 32765);	//32765이상이면 while문을 다시 실행합니다.

	while (1)
	{
		printf("바꿀 진법을 입력해주세요.\n\t:");
		scanf("%d", &n2);
		if (n2 <= 16)break;
		else printf("2~16까지 입력이 가능합니다."); system("cls");
	}

	Pp(n, n2);	//함수를 호출합니다.

	for (; t >= 0; t--)
		printf("%d", cng[t]);	//t를 줄여가면서 cng 배열을 출력합니다.
}

int f(const int x, const int n)
{
	if (x < n) {	//x값이 n보다 작아지면 x값을 배열에 넣습니다.
		cng[t] = x; return;	
	}
	else {
		cng[t++] = x%n;			//x값이 n보다 크거나 같을경우 x를 n으로 나눈 나머지를 배열에 넣은 후
		return f(x / n, n);	//다시 함수 f를 호출합니다.
	}
}