#include <iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int h[26];
    string word;
    for(int i = 0; i < 26; ++i) {
        cin >> h[i];
    }
    cin >> word;

    int height = 0;
    int length = word.length();
    for(int i = 0; i < length; ++i) {
        if (height < h[word[i]-97]) {
            height = h[word[i]-97];
        }
    }
    cout << height*length << endl;
    return 0;
}
