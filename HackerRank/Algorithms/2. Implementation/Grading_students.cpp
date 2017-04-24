#include <iostream>
using namespace std;


int main() {
    /* Enter your code here.
       Read input from STDIN.
       Print output to STDOUT */
    int n, grade;
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; ++i) {
      cin >> grade;
      if ((grade >= 38) && (grade % 5) > 2) {
        grade = ((grade + 2) / 5) * 5;
      }
      cout << grade << "\n";
    }
    return 0;
}
