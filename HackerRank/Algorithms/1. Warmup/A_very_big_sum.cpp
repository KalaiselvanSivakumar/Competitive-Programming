#include <iostream>
using namespace std;

int main() {
    int size;
    ios::sync_with_stdio(false);
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    long long result = 0;
    for(int i = 0; i < size; ++i) {
        result += arr[i];
    }
    cout << result << "\n";
    return 0;
}
