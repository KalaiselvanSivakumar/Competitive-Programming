#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here.
       Read input from STDIN.
       Print output to STDOUT */
    string str;
    cin >> str;
    if (str[8] == 'A') {
        if (str.substr(0, 2) == "12") {
            str = "00" + str.substr(2, 6);
        }
        else {
            str = str.substr(0, 8);
        }
    }
    else {
        if (str.substr(0, 2) == "12") {
            str = str.substr(0, 8);
        }
        else {
            str = to_string(stoi(str.substr(0, 2)) + 12) + str.substr(2, 6);
        }
    }
    cout << str << endl;
    return 0;
}
