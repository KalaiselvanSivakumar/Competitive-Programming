
#include <iostream>
#include <cstring>
using namespace std;

int stringConstruction(string s) {
  bool characters[26];
  int i, copyCost = 0;
  memset(characters, false, 26);

  while (s[i]) {
    if (!characters[s[i] - 'a']) {
      characters[s[i] - 'a'] = true;
      copyCost++;
    }
    i++;
  }

  return copyCost;
}

int main() {
    int test_case;
    string str;
    ios::sync_with_stdio(false);
    cin >> test_case;
    while (test_case--) {
      cin >> str;
      cout << stringConstruction(str) << "\n";
    }
    return 0;
}
