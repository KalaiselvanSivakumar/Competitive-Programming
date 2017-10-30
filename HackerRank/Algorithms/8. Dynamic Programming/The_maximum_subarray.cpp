#include <iostream>
#include <vector>
// #include <cstdio>
using namespace std;

void maximum_sub_array_sum(vector<int> a, int n) {
    int max_so_far = a[0];
    int max_till_here = a[0];
    int max_non_contiguous = a[0];
    for(int i = 1; i < n; ++i) {
        max_till_here = max(a[i], max_till_here + a[i]);
        max_so_far = max(max_till_here, max_so_far);
        max_non_contiguous = max(max(max_non_contiguous, max_non_contiguous + a[i]), a[i]);
    }
    cout << max_so_far << " " << max_non_contiguous << endl;
}

int main() {
    // freopen("input.txt", "r", stdin);
    int test_case, size;
    cin >> test_case;
    while (test_case--) {
        cin >> size;
        vector<int> arr(size);
        for(int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
        maximum_sub_array_sum(arr, size);
    }
    return 0;
}
