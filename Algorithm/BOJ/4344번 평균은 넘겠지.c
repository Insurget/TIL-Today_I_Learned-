#include <stdio.h>
int main(int argc, const char * argv[])
{
	int T ;
	int N ;
	int tc[1000];
	scanf("%d", &T);
	while (T--)
	{ 
		float total = 0;
		int result = 0;
		scanf("%d", &N);
		for(int i=0 ; i<N ; i++)
		{
			scanf("%d", &tc[i]);
			total += tc[i] ;
		}
		total /= N;
		for(int i=0 ; i<N ; i++)
		{ 
			if((float)tc[i] > total)
			{
				result++;
			}
		} 
		printf("%.3f%%\n", (float)result/N * 100); 
	}
	return 0;
}
