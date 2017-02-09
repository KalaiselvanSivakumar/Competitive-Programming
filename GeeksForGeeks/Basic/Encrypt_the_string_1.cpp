#include <iostream>
#include <string>
using namespace std;

string reverse(string input)
{
    string output = "";
    for(int i = 0; i < input.length(); ++i)
    {
        output = input[i] + output;
    }
    return output;
}

int main()
{
    int test_case;
    ios::sync_with_stdio(false);
    cin >> test_case;
    string str, result;
    while (test_case--)
    {
        cin >> str;
        char test_character = str[0];
        int count = 1;
        result = "";
        int j = 0;
        for(int i = 1; i < str.length(); ++i)
        {
            if (test_character == str[i]) {
                count += 1;
            }
            else
            {
                result += test_character;
                result += to_string(count);
                test_character = str[i];
                count = 1;
            }
        }
        result += test_character + to_string(count);
        cout << reverse(result) << endl;
    }
}
