#include <iostream>
using namespace std;

int main()
{
    int test_case;
    ios::sync_with_stdio(false);
    cin >> test_case;
    int size, maximum, count;
    while (test_case--)
    {
        cin >> size;
        int arr[size];
        for(int i = 0; i < size; ++i)
        {
            cin >> arr[i];
        }
        maximum = arr[0];
        count = 1;
        for(int i = 1; i < size; ++i)
        {
            if (arr[i] > maximum)
            {
                maximum = arr[i];
                ++count;
            }
        }
        cout << count << endl;
    }
}
