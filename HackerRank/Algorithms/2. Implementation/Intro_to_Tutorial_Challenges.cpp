#include <iostream>
using namespace std;

int main() {
    int value, size;
    ios::sync_with_stdio(false);
    cin >> value >> size;
    int arr[size];
    int i;
    for(i = 0; i < size; ++i) {
      cin >> arr[i];
    }

    int l = 0, r = size - 1;
    int mid;
    while (l <= r) {
      mid = (l + r) / 2;
      if (arr[mid] == value) {
        break;
      }
      else if (arr[mid] < value) {
        l = mid + 1;
      }
      else {
        r = mid - 1;
      }
    }

    if ( l <= r) {
      cout << mid << "\n";
    }
    else {
      cout << -1 << "\n";
    }
    return 0;
}
