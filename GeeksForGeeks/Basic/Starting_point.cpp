#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int test_case;
    cin >> test_case;
    int current_point[2];
    int total_paths;
    while (test_case--)
    {
        cin >> current_point[0] >> current_point[1];
        cin >> total_paths;
        int paths[total_paths][2];
        for(int i = 0; i < total_paths; ++i)
        {
            cin >> paths[i][0] >> paths[i][1];
        }
        for(int i = 0; i < total_paths; ++i)
        {
            current_point[0] -= paths[i][0];
            current_point[1] -= paths[i][1];
        }
        cout << current_point[0] << " " << current_point[1] << endl;
    }
}
