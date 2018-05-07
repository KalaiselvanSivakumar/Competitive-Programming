#include <iostream>
using namespace std;

int main() {
    int test_case;
    cin >> test_case;

    while (test_case--) {
        string str;
        cin >> str;
        
        int i = 0, j = str.length() - 1;
        while (i < j) {
            char c = str[j];
            str[j] = str[i];
            str[i] = c;
            ++i;
            --j;
        }
        cout << str << endl;
    }
    return 0;
}