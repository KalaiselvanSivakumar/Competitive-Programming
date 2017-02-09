#include <iostream>
using namespace std;

int main()
{
    int size;
    ios::sync_with_stdio(false);
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    for (int i = size - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
