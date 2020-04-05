#include <iostream>
#include <set>

void print_result(int caseId, int trace, int rowCount, int columnCount) {
    std::cout << "Case #" << caseId << ": "
            << trace << " " << rowCount << " "
            << columnCount << '\n';
}

int computeTrace(int **matrix, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += matrix[i][i];
    }
    return sum;
}

int	repeatedElements(int **matrix, int size, bool isRow) {
		int repeatedCount = 0;
		int i, j;
		int k, l;
		int value;
		for (i = 0; i < size; ++i) {
			std::set<int> elements;
			for (j = 0; j < size; ++j) {
				if (isRow) {
					k = i;
					l = j;
				}
				else {
					k = j;
					l = i;
				}
				value = matrix[k][l];
				if (elements.find(value) != elements.end()) {
					++repeatedCount;
					break;
				}
				else {
					elements.insert(value);
				}
			}
		}
		return repeatedCount;
	}

int main() {
	int testCase;
	std::cin >> testCase;
	int caseId = 1;
	int size;
	while (caseId <= testCase) {
		std::cin >> size;
		int **matrix = new int*[size];
		for (int i = 0; i < size; ++i) {
			matrix[i] = new int[size];
			for (int j = 0; j < size; ++j) {
				std::cin >> matrix[i][j];
			}
		}
		print_result(caseId,
            computeTrace(matrix, size),
            repeatedElements(matrix, size, true),
            repeatedElements(matrix, size, false)
		);
		++caseId;
	}
}
