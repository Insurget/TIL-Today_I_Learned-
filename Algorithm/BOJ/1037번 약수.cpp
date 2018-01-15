#include <iostream>
#include <algorithm>
using namespace std;

int real[50];

int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}

int main()
{
	int N;

	cin >> N;

	int reall;

	for (int i = 0; i < N; i++)cin >> real[i];

	sort(real, real + N);
	reall = real[0] * real[N - 1];
	if (reall==real[N-1])
	{
		reall *= real[0];
	}
	cout << reall;
}