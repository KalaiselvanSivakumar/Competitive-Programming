//CPP 14
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    int temp;
    while(b > 0)
    {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    int i, j, x, temp;
    if (k == 0 || n == k) {
        return a;
    }
    for(i = 0; i < gcd(n, k); ++i)
    {
        j = i;
        temp = a[i];
        while (1) {
            x = j + k;
            if (x >= n) { x = x - n; }
            if (x == i) { break; }
            a[j] = a[x];
            j = x;
        }
        a[j] = temp;
    }
    return a;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}
