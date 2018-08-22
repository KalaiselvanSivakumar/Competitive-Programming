#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the pickingNumbers function below.
int pickingNumbers(vector<int> a)
{
	int i, j, size = a.size();
	int current_up_count, current_down_count, current_value_count;
	int current_up_value, current_down_value, current_value;
	int current_total, maximum_count = 0;
	for (i = 0; i < size; i++) {
		current_up_count = current_down_count = 0;
		current_value_count = 1;
		current_value = a[i];
		current_up_value = a[i] + 1;
		current_down_value = a[i] - 1;
		for (j = i + 1; j < size; j++) {
			if (a[j] == current_up_value) {
				current_up_count++;
			}
			else if (a[j] == current_down_value) {
				current_down_count++;
			}
			else if (a[j] == current_value) {
				current_value_count++;
			}
		}
		current_total = current_value_count +
			((current_up_count > current_down_count) ?
				current_up_count : current_down_count);
		if (current_total > maximum_count) {
			maximum_count = current_total;
		}
	}
	return maximum_count;
}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string a_temp_temp;
	getline(cin, a_temp_temp);

	vector<string> a_temp = split_string(a_temp_temp);

	vector<int> a(n);

	for (int i = 0; i < n; i++)
	{
		int a_item = stoi(a_temp[i]);

		a[i] = a_item;
	}

	int result = pickingNumbers(a);

	fout << result << "\n";

	fout.close();

	return 0;
}

vector<string> split_string(string input_string)
{
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
		return x == y and x == ' ';
	});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ')
	{
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos)
	{
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}
