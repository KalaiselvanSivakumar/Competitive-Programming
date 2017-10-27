#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int bitwiseOrOnesCount(string s1, string s2, int length) {
    int i = 0, onesCount = 0;
    while (i < length) {
        if (s1[i] == '1' || s2[i] == '1') {
            onesCount++;
        }
        ++i;
    }
    return onesCount;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    // Solution
    int maxNoOfTopics = 0, teamMaxNoOfTopics = 0;
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            int maxTopics = bitwiseOrOnesCount(topic[i], topic[j], m);
            if (maxNoOfTopics < maxTopics) {
                maxNoOfTopics = maxTopics;
                teamMaxNoOfTopics = 1;
            }
            else if (maxNoOfTopics == maxTopics) {
                teamMaxNoOfTopics++;
            }
        }
    }
    cout << maxNoOfTopics << "\n" << teamMaxNoOfTopics << "\n";
    return 0;
}
