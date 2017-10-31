#include <cmath>
#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int query, x, y, z;
    int catADistance, catBDistance;
    cin >> query;
    while (query--) {
        cin >> x >> y >> z;
        catADistance = abs(z - x);
        catBDistance = abs(z - y);
        if (catADistance > catBDistance) {
            cout << "Cat B" << endl;
        } else if (catADistance < catBDistance) {
            cout << "Cat A" << endl;
        } else {
            cout << "Mouse C" << endl;
        }
    }
    return 0;
}
