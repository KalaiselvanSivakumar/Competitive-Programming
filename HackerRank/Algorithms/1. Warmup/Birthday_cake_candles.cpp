#include <iostream>
using namespace std;


int main() {
    /* Enter your code here.
       Read input from STDIN.
       Print output to STDOUT */
    int n, i, max, count;
    ios::sync_with_stdio(false);
    cin >> n;
    int height[n];
    for (i = 0; i < n; ++i) {
      cin >> height[i];
    }

    max = height[0];
    count = 1;
    for (i = 1; i < n; ++i) {
      if (height[i] == max) {
        ++count;
      }
      else if (height[i] > max) {
        max = height[i];
        count = 1;
      }
    }

    cout << count < "\n";
    return 0;
}
