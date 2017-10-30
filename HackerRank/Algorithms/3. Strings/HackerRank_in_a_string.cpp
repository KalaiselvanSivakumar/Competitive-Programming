#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    int n;
    string s;
    string checkFor = "hackerrank";
    int i, j, i_length, j_length;
    cin >> n;
    while (n--) {
      cin >> s;
      i = 0;
      j = 0;
      i_length = s.length();
      j_length = checkFor.length();
      for (; i < i_length && j < j_length; ++i) {
        if (s[i] == checkFor[j]) {
          ++j;
        }
      }
      if (j == j_length) {
        cout << "YES" << "\n";
      } else {
        cout << "NO" << "\n";
      }
    }
    return 0;
}
