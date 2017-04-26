#include <stdio.h>

int f(int S_value, int sip, int ill, int n)
{
	printf("%d + %d = %d, %d\n n = %d\n",sip,ill,sip+ill, ill*10+((sip+ill)%10), n);
	if (sip * 10 + ill == S_value&&n!=0)return printf("%d\n", n);
	sip = (sip + ill) % 10;
	return f(S_value, ill, sip, ++n);
}
int main(void)
{
	int start;
	
	scanf("%d", &start);
	if (start < 10)f(start * 10, start, 0, 0);
	f(start, start / 10, start % 10, 0);
}