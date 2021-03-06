#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string str;
    int row, column, ceil_value, floor_value, length;
    cin >> str;
    length = str.length();
    floor_value = floor(sqrt(length));
    ceil_value  = ceil(sqrt(length));
    if (floor_value * floor_value >= length) {
        row    = floor_value;
        column = floor_value;
    }
    else if (floor_value * ceil_value >= length) {
        row    = floor_value;
        column = ceil_value;
    }
    else {
        row    = ceil_value;
        column = ceil_value;
    }
    int k = 0;
    vector< vector<char> > encrypted_matrix(column, vector<char>(row));
    for(int i = 0; i < row; ++i) {
        for(int j = 0; j < column; ++j) {
            if (k < length) {
                encrypted_matrix[i][j] = str[k];
                ++k;
            }
            else {
                encrypted_matrix[i][j] = ' ';
            }
        }
    }
    string result = "";
    for(int i = 0; i < column; ++i) {
        for(int j = 0; j < row; ++j) {
            if (encrypted_matrix[j][i] != ' ') {
                result += encrypted_matrix[j][i];
            }
            else {
                break;
            }
         }
         result += " ";
    }
    cout << result << endl;
    return 0;
}
