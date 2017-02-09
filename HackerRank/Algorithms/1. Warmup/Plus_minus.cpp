#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    /* Enter your code here.
       Read input from STDIN.
       Print output to STDOUT */
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int positive = 0, negative = 0, zero = 0;
    for(int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            positive++;
        }
        else if (arr[i] < 0) {
            negative++;
        }
        else {
          zero++;
        }
    }
    cout << setprecision(6)  << positive/(float) n << "\n";
    cout << setprecision(6)  << negative/(float) n << "\n";
    cout << setprecision(6)  << zero/(float) n << "\n";
    return 0;
}
