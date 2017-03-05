#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int length;
    string s;
    int step_count = 0;
    cin >> length >> s;
    for (int i = 0; i < length;) {
        if (s.substr(i,3) == "010") {
            step_count++;
            i = i + 3;
        }
        else {
            ++i;
        }
    }
    cout << step_count << endl;
    return 0;
}
