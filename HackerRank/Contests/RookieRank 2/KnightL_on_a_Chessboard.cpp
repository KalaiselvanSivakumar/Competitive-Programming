#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct node {
    int x;
    int y;
    int distance;
};

int testReachable(int n, int a, int b) {
    vector< vector<bool> > chessBoard(n, vector<bool>(n));
    queue<struct node> myQueue;

    int xCombinations[] = {-a, -a, a, a, -b, -b, b, b};
    int yCombinations[] = {-b, b, -b, b, -a, a, -a, a};
    int check;
    if (a != b) {
        check = 8;
    }
    else {
        check = 4;
    }

    node temp;
    temp.x = 0;
    temp.y = 0;
    temp.distance = 0;

    myQueue.push(temp);

    while(!myQueue.empty()) {
        //Take the next node and mark it as processed
        node current = myQueue.front();
        myQueue.pop();
        chessBoard[current.x][current.y] = true;

        //Node reached. Return distance
        if (current.x == n-1 && current.y == n-1) {
            return current.distance;
        }

        int newX;
        int newY;
        for(int k = 0; k < check; ++k) {
            newX = current.x + xCombinations[k];
            newY = current.y + yCombinations[k];
            if ((newX < n && newX >= 0) && (newY < n && newY >= 0) && (chessBoard[newX][newY] == false)) {
                node next;
                next.x = newX;
                next.y = newY;
                next.distance = current.distance + 1;
                myQueue.push(next);
            }
        }
    }

    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    ios::sync_with_stdio(false);
    cin >> n;
    vector< vector<int> > matrix(n, vector<int>(n));
    for(int i = 1; i < n; ++i) {
        for(int j = i; j < n; ++j) {
            int value = testReachable(n, i, j);
            matrix[i][j] = value;
            matrix[j][i] = value;
        }
    }
    for(int i = 1; i < n; ++i) {
        for(int j = 1; j < n; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
