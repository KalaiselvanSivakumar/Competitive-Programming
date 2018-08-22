#include <bits/stdc++.h>
using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
	int total_valley_count = 0;
	bool isValley = false;
	int level = 0;
	for (int i = 0; i < n; ++i) {
		if (level == 0) {
			isValley = s[i] == 'D';
			level++;
			if (isValley) {
				total_valley_count++;
			}
			continue;
		}
		if (!isValley) {
			if (s[i] == 'U') {
				level++;
			}
			else {
				level--;
			}
		}
		else {
			if (s[i] == 'U') {
				level--;
			}
			else {
				level++;
			}
		}
	}
	return total_valley_count;
}

int main() {
	ofstream fout(getenv("OUTPUT_PATH"));
	
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	string s;
	getline(cin, s);
	
	int result = countingValleys(n, s);
	fout << result << "\n";
	fout.close();
	return 0;
}
