#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n) {
    // Complete this function
    int height = 1;
    bool isSpring = true;
    while (n--) {
        if (isSpring) {
            height *= 2;
        }
        else {
            height += 1;
        }
        isSpring = !isSpring;
    }
    return height;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = utopianTree(n);
        cout << result << endl;
    }
    return 0;
}
