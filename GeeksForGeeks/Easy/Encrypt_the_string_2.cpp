#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    string str, result;
    char test_character;
    int test_count;
    while (test_case--)
    {
        cin >> str;
        test_character = str[0];
        test_count = 1;
        result = "";
        char a[50];
        for(int i = 1; i < str.length(); ++i)
        {
            if (test_character == str[i])
            {
                ++test_count;
            }
            else
            {
                sprintf(a, "%x", test_count);
                result += test_character;
                result += a;
                test_character = str[i];
                test_count = 1;
            }
        }
        result += test_character;
        sprintf(a, "%x", test_count);
        result += a;
        reverse(result.begin(), result.end());
        cout << result << endl;
    }
}
