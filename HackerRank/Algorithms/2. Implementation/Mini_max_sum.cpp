#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long arr[5];
    long max_sum = 0;
    long min_sum = 0;
    for(int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    sort(begin(arr), end(arr));

    for(int i = 1; i < 5; ++i) {
        max_sum += arr[i];
    }

    for(int i = 0; i < 4; ++i) {
        min_sum += arr[i];
    }

    cout << min_sum << " " << max_sum << endl;
    return 0;
}
