#include <iostream>
using namespace std;

#define endl '\n'

int main()
{
    int test_case;
    ios::sync_with_stdio(false);

    cin >> test_case;
    int input, given_output;
    while (test_case--)
    {
        cin >> input >> given_output;
        if (input * (input+1) /2 == given_output) {
            cout << "1" << endl;
        }
        else {
          cout << "0" << endl;
        }
    }
}
