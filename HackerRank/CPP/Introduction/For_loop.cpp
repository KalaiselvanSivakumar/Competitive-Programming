#include <iostream>
using namespace std;

#define endl '\n'

int main() {
    // Complete the code.
    int a, b;
    ios::sync_with_stdio(false);
    cin >> a >> b;
    for(int i=a; i<=b; ++i)
    {
        if (i > 9 && i%2 == 0)
        {
            cout << "even" << endl;
        }
        else if (i > 9 && i%2 == 1)
        {
            cout << "odd" << endl;
        }
        else if (i == 1) cout << "one" << endl;
        else if (i == 2) cout << "two" << endl;
        else if (i == 3) cout << "three" << endl;
        else if (i == 4) cout << "four" << endl;
        else if (i == 5) cout << "five" << endl;
        else if (i == 6) cout << "six" << endl;
        else if (i == 7) cout << "seven" << endl;
        else if (i == 8) cout << "eight" << endl;
        else if (i == 9) cout << "nine" << endl;
    }
    return 0;
}
