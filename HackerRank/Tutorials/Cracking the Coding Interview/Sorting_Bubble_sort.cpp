#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++) {
        cin >> a[a_i];
    }
    int total_swaps = 0;
    for(int i = 0; i < n; ++i) {
        int number_of_swaps = 0;
        for(int j = 0; j < n - 1; ++j) {
            if (a[j] > a[j+1]) {
                total_swaps++;
                number_of_swaps++;
                a[j] ^= a[j+1];
                a[j+1] ^= a[j];
                a[j] ^= a[j+1];
            }
        }
        if (number_of_swaps == 0) {
            break;
        }
    }
    cout << "Array is sorted in " << total_swaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;
  return 0;
}
