#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int test_case;
  int n, k, i;
  int currentNaturalNumber;
  ios::sync_with_stdio(false);
  cin >> test_case;
  while (test_case--) {
    cin >> n >> k;
    int arr[n];
    for(i = 0; i < n; i++) {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    i = 0; currentNaturalNumber = 1;
    while (k && i < n) {
      if (arr[i] < currentNaturalNumber) {
        ++i;
      }
      else if (arr[i] == currentNaturalNumber) {
        ++i;
        ++currentNaturalNumber;
      }
      else {
        cout << currentNaturalNumber << " ";
        ++currentNaturalNumber;
        --k;
      }
    }
    while (k) {
      cout << currentNaturalNumber << " ";
      ++currentNaturalNumber;
      --k;
    }
    cout << "\n";
  }
  return 0;
}
