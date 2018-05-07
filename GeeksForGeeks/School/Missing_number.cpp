#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int test_case;
    cin >> test_case;

    while (test_case--) {
        int size;
        cin >> size;

        int i;
        int arr[size - 1];
        for (i = 0; i < size - 1; i++) {
            cin >> arr[i];
        }

        bool status[size];
        memset(status, false, sizeof(status));
        for (i = 0; i < size - 1; i++) {
            status[arr[i] - 1] = true;
        }

        for (i = 0; i < size; i++) {
            if (status[i] == false) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
	return 0;
}