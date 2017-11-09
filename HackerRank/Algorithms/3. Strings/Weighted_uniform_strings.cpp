#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str;
    cin >> str;
    unordered_set<int> weightSet;
    int i, length = str.length(), previousWeight = 0, queryCount, queryWeight;
    char previousChar = ' ';
    for (i = 0; i < length; ++i) {
        if (previousChar == str[i]) {
            previousWeight += str[i] - 96;
        } else {
            previousChar = str[i];
            previousWeight = str[i] - 96;
        }
        weightSet.insert(previousWeight);
    }
    // for (int x: weightSet) {
    //     cout << x << " ";
    // }
    cin >> queryCount;
    while (queryCount--) {
        cin >> queryWeight;
        if (weightSet.find(queryWeight) == weightSet.end()) {
            cout << "No\n";
        }
        else {
            cout << "Yes\n";
        }
    }
    return 0;
}
