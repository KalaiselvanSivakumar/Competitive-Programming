#include <iostream>
using namespace std;

int main() {
    /* Enter your code here.
       Read input from STDIN.
       Print output to STDOUT */
    int test_case;
    string input;
    int i, j;
    ios::sync_with_stdio(false);
    cin >> test_case;
    while (test_case--) {
        cin >> input;
        int delete_characters_count = 0;
        i = 1;
        j = 0;
        while (i < input.length()) {
            if (input[i] == input[j]) {
                delete_characters_count++;
                ++i;
            }
            else {
                j = i;
                ++i;
            }
        }
        cout << delete_characters_count << endl;
    }
    return 0;
}
