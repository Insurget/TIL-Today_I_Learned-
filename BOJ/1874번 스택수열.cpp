#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int stk[100000];
char ans[200000];

int n, now = 0, num, stkID = 0, ansID = 0;
int i;
bool s = true;

int main()
{
	cin >> n;

	while (n--) {
		cin >> num;
		if (num > now) {
			for (i = now; i < num; i++) {
				stk[stkID++] = i + 1;
				ans[ansID++] = '+';
			}
		}
		else if (stk[stkID - 1] != num) {
			cout << "NO";
			return 0;
		}
		stkID--;
		ans[ansID++] = '-';
		if (now < num)now = num;
	}
	for (i = 0; i < ansID; i++)cout << ans[i] << '\n';
}