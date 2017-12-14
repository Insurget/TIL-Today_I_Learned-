#include <iostream>
#include <stack>
#include <cstdio>
#include <string>

std::string a;
std::stack<char> stk;

int total = 0, recnt = 0;
char t;

int main()
{
	std::cin >> a;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == '(' || a[i] == '[') {
			stk.push(a[i]);
		}
		else {
			if (a[i] == ')') {
				stk.pop();
				stk.push(2);
			}
			else if (a[i] == ']') {
				stk.pop();
				stk.push(3);
			}
		}
	}
	std::cout << total;	
}