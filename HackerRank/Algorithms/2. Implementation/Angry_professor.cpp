#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  int test_case;
  int n, k;
  int i;
  int totalStudentsArrived;
  int *arr;
  cin >> test_case;
  while (test_case--) {
    cin >> n >> k;
    arr = (int *) malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
      cin >> arr[i];
    }
    totalStudentsArrived = 0;
    for (i = 0; i < n; i++) {
      if (arr[i] <= 0) {
        totalStudentsArrived++;
      }
    }
    if (totalStudentsArrived < k) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
    free(arr);
  }
}
