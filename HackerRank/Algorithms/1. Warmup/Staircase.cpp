#include <iostream>
using namespace std;

int main() {
    /* Enter your code here.
       Read input from STDIN.
       Print output to STDOUT */
    int input;
    int i, j;
    cin >> input;

    for(i = 0; i < input; ++i) {
        for(j = 0; j < input-i-1; ++j) {
            cout << ' ';
        }
        for(; j < input; ++j) {
            cout << '#';
        }
        cout << '\n';
    }
    return 0;
}
