#include <iostream>
using namespace std;


int main() {
    int test_case;
    unsigned int number;
    cin >> test_case;
    while (test_case--) {
        cin >> number;
        number = ~number;
        cout << number << "\n";
    }
    return 0;
}
