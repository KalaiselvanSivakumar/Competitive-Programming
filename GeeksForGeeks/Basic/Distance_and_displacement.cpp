#include <iostream>
#include <cmath>
using namespace std;

int findDistance(int arr[], int n, string direction) {
    int distance = 0;
    int point[2] = {0, 0};
    for(int i = 0; i < n; ++i) {
        distance += arr[i];
        switch (direction[i]) {
          case 'N': point[1] += arr[i];
                    break;
          case 'S': point[1] -= arr[i];
                    break;
          case 'E': point[0] += arr[i];
                    break;
          case 'W': point[0] -= arr[i];
                    break;
        }
    }
    distance += ceil(sqrt(point[0] * point[0]
                      + point[1] * point[1]));
    return distance;
}

int main() {
    ios::sync_with_stdio(false);
    int test_case;
    int m;
    string str;
    cin >> test_case;
    while (test_case--) {
        cin >> m;
        int arr[m];
        for(int i = 0; i < m; ++i) {
            cin >> arr[i];
        }
        cin >> str;
        cout << findDistance(arr, m, str) << endl;
    }
}
