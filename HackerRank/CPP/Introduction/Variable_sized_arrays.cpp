#include <vector>
#include <iostream>
using namespace std;

#define endl '\n'

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios::sync_with_stdio(false);
    int size, query_count;
    cin >> size >> query_count;
    int first_index, second_index;
    vector< vector<int> > v(size);

    for(int i = 0; i < size; ++i)
    {
        int temp;
        cin >> temp;
        v[i] = vector<int>(temp);
        for(int j = 0; j < temp; ++j)
        {
            cin >> v[i][j];
        }
    }

    for(int i = 0; i < query_count; ++i)
    {
        cin >> first_index >> second_index;
        cout << v[first_index][second_index] << endl;
    }
    return 0;
}
