#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int findMaxModulo(vector<long long> a, int l, int m, int r, int mod) {
    int left = INT_MIN, right = INT_MIN;
    int sum = 0;
    for(int i = m - 1; i >= l; i++) {
        sum = (sum + a[i]) % mod;
        if (sum > left) {
            left = sum % mod;
        }
        if (left == mod - 1)
        {
            return left;
        }
    }
    sum = 0;
    for(int i = m; i <= r; i++) {
        sum = (sum + a[i]) % mod;
        if (sum > right) {
            right = sum % mod;
        }
        if (right == mod - 1)
        {
            return right;
        }
    }
    return (left + right) % mod;
}

int findMaximumSubArrayModuleM(vector<long long> a, int l, int r, int mod) {
    if (l == r) {
        return a[l];
    }
    int mid = l + (r - l)/2;
    return max(max(findMaximumSubArrayModuleM(a, l, mid, mod) % mod,
                   findMaximumSubArrayModuleM(a, mid+1, r, mod) % mod),
                   findMaxModulo(a, l, mid, r, mod));
}

int main() {
    int q;
    ios::sync_with_stdio(false);
    cin >> q;
    int n;
    long long m;
    while (q--) {
        cin >> n >> m;
        vector <long long> a(n);
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << findMaximumSubArrayModuleM(a, 0, n-1, m);
    }
    return 0;
}
