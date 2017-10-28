#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int testCase;
    cin >> testCase;
    string s;
    while (testCase--) {
        cin >> s;
        int length = s.length();
        int minimumOperations = 0, i = 0, j = length - 1;
        while (i < j) {
            if (s[i] - 97 > s[j] - 97) {
                minimumOperations += (s[i] - 97) - (s[j] - 97);
            }
            else {
                minimumOperations += (s[j] - 97) - (s[i] - 97);
            }
            i++;
            j--;
        }
        cout << minimumOperations << "\n";
    }
    return 0;
}
