#include <iostream>
#include <vector>
using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // Complete this function
    int result = 0;
    int box = m, sum = 0, i = 0;
    while (i < n && m) {
        sum += s[i];
        --m;
        ++i;
    }
    if (sum == d && m == 0) {
        ++result;
    }
    while (i < n) {
        sum += s[i] - s[i - box];
        if (sum == d) {
            ++result;
        }
        ++i;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
