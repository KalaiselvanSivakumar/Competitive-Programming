#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int A[n];
    int B[m];
    int left = 0, right = 1000;
    for(int i = 0; i < n; ++i) {
      cin >> A[i];
      if (left < A[i]) {
        left = A[i];
      }
    }
    for(int i = 0; i < m; ++i) {
      cin >> B[i];
      if (right > B[i]) {
        right = B[i];
      }
    }

    int count = 0;
    bool flag;
    for(int i = left; i <= right; ++i) {
      flag = true;
      for(int j = 0; j < n; ++j) {
        if (!((i % A[j] == 0) && (i / A[j] > 0))) {
          flag = false;
          break;
        }
      }
      if (flag) {
        for(int j = 0; j < m; ++j) {
          if (!((B[j] % i == 0) && (B[j] / i > 0))) {
            flag = false;
            break;
          }
        }
      }
      if (flag) {
        count++;
      }
    }
    cout << count << "\n";
    return 0;
}
