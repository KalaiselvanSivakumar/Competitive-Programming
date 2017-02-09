#include <cmath>
#include <iostream>
using namespace std;

string check_for_funny_string(string s) {
    int i = 0;
    int j = s.size() - 1;
    while (i <= j) {
        if (abs(s[i] - s[i+1]) !=
            abs(s[j] - s[j-1])) {
            return "Not Funny";
        }
        ++i;
        --j;
    }
    return "Funny";
}

int main() {
    /* Enter your code here.
       Read input from STDIN.
       Print output to STDOUT */
    int test_case;
    ios::sync_with_stdio(false);
    cin >> test_case;
    string input;
    while (test_case--) {
        cin >> input;
        cout << check_for_funny_string(input) << endl;
    }
    return 0;
}
