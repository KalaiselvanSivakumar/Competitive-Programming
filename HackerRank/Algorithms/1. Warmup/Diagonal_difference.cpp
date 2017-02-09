#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    /* Enter your code here.
       Read input from STDIN.
       Print output to STDOUT */
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector< vector<int> > matrix(N, vector<int>(N));
    int i, j, left = 0, right = 0;
    for (i = 0; i < N; ++i) {
        for(j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }
    i = 0;
    while (i < N) {
        left += matrix[i][i];
        right += matrix[i][N-1-i];
        ++i;
    }
    cout << abs(left - right) << endl;
    return 0;
}
