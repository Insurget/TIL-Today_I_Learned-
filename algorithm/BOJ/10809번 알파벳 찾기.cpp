#include <string>
#include <iostream>
#include <algorithm>

int main() {
	std::string ans;
	std::cin >> ans;

	for (int i = 'a'; i <= 'z'; i++) {
		auto it = find(ans.begin(), ans.end(), i);
		if (it == ans.end()) {
			std::cout << "-1 ";
		}
		else std::cout << (it - ans.begin()) << ' ';
	}
}