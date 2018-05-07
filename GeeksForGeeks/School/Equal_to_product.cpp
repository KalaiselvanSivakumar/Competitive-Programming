#include <iostream>
#include <set>
using namespace std;

int main() {
	int test_case;
    cin >> test_case;
    while (test_case--) {
        // Reading the inputs
        int size, product;
        cin >> size >> product;
        int arr[size], i;
        for (i = 0; i < size; i++) {
            cin >> arr[i];
        }

        // Logic Part
        set<int> container;
        bool result_flag = false;
        for (i = 0; i < size; i++) {
            if (arr[i] == 0) {
                continue;
            }
            auto search_result = container.find(product / arr[i]);
            if ((search_result != container.end()) &&
                    (*search_result * arr[i] == product)) {
                result_flag = true;
                break;
            }
            container.insert(arr[i]);
        }
        if (result_flag) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
	return 0;
}