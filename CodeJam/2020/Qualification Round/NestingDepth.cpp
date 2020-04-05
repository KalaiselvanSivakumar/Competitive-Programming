#include <iostream>
#include <vector>

void print_result(int case_id, std::string nested_parentheses_digits) {
	std::cout << "Case #" << case_id << ": "
		<< nested_parentheses_digits << '\n';
}

void close_parentheses(std::vector<char> &source, int to_close_parentheses_count) {
	while (to_close_parentheses_count--) {
		source.push_back(')');
	}
}

void open_parentheses(std::vector<char> &source, int to_open_parentheses_count) {
	while (to_open_parentheses_count--) {
		source.push_back('(');
	}
}

std::string compute_nested_parentheses(std::string digits) {
	std::vector<char> nested_parentheses_vector;
	int no_of_open_parentheses = 0;
	int previous_digit = 0;
	int length = digits.length();
	for (int i = 0; i < length; ++i) {
		int current_digit = digits[i] - '0';
		if (current_digit > previous_digit) {
			open_parentheses(nested_parentheses_vector, current_digit - no_of_open_parentheses);
			no_of_open_parentheses = current_digit;
		}
		else if (current_digit < previous_digit) {
			close_parentheses(nested_parentheses_vector, no_of_open_parentheses - current_digit);
			no_of_open_parentheses -= (no_of_open_parentheses - current_digit);
		}
		nested_parentheses_vector.push_back(current_digit + '0');
		previous_digit = current_digit;
	}
	close_parentheses(nested_parentheses_vector, no_of_open_parentheses);
	return std::string(nested_parentheses_vector.begin(), nested_parentheses_vector.end());
}

int main() {
	int test_case, case_id = 1;
	std::string digits;
	std::cin >> test_case;

	while (case_id <= test_case) {
		std::cin >> digits;
		print_result(case_id, compute_nested_parentheses(digits));
		++case_id;
	}
}
