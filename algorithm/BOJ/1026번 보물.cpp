#include <iostream>
#include <algorithm>
using namespace std;

int A[50], B[50];
int memoB[50];
int memoA[50];
int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < N; i++) cin >> B[i];
	int bTemp[50];
	int aTemp[50];
	for (int i = 0; i < N; i++) { bTemp[i] = B[i]; aTemp[i] = A[i]; }
	sort(bTemp, bTemp + N);
	sort(aTemp, aTemp + N);
	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (bTemp[i] == B[j])memoB[i] = j;
			if (aTemp[i] = A[i])memoA[i] = j;
		}
	}*/
	int S = 0;
	for (int i = 0; i < N; i++) {
		S += bTemp[i] * aTemp[N - i - 1];
	}
	printf("%d", S);
}