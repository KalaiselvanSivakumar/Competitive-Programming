#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>

using namespace std;


int main(){
    int n, i, j, minimum;
    ios::sync_with_stdio(false);
    cin >> n;
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }

    //Logic
    minimum = INT_MAX;
    for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
        if (A[i] == A[j]) {
          minimum = min(minimum, abs(i - j));
        }
      }
    }
    if (minimum == INT_MAX) {
      cout << -1 << "\n";
    } else {
      cout << minimum << "\n";
    }
    return 0;
}
