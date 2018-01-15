#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s;
	cin >> s;

	list<char> editor(s.begin(), s.end());
	auto cursor = editor.end();
	int N;
	cin >> N;
	while (N--) {
		char cmd;
		cin >> cmd;
		if (cmd == 'L') {
			if (cursor != editor.begin()) {
				cursor--;
			}
		}
		else if (cmd == 'D') {
			if (cursor != editor.end()) {
				cursor++;
			}
		}
		else if (cmd == 'B') {
			if (cursor != editor.begin()) {
				auto temp = cursor;
				cursor--;
				editor.erase(cursor);
				cursor = temp;
			}
		}
		else if (cmd == 'P') {
			char p;
			cin >> p;
			editor.insert(cursor, p);
		}
	}
	for (char c : editor) {
		cout << c;
	}
	cout << '\n';
}