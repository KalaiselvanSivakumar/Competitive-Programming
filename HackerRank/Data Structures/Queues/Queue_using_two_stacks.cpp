#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


stack<int> s1, s2;

void push(int value) {
	while (!s1.empty()) {
		s2.push(s1.top());
		s1.pop();
	}
	s1.push(value);
	while (!s2.empty()) {
		s1.push(s2.top());
		s2.pop();
	}
}

void pop() {
	s1.pop();
}

int front() {
	return s1.top();
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int test_cases;
	cin >> test_cases;
	int operation, value;

	while (test_cases--) {
		cin >> operation;
		switch (operation) {
			case 1:
				cin >> value;
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				cout << front() << '\n';
				break;
		}
	}

    return 0;
}
