#include <iostream>
#include <vector>
#include <algorithm>
#define nl '\n'

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, num;
    cin >> n;
    vector<int> v(n);

    for (int i{}; i < n; ++i) 
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    cin >> m;
    for(int i{}; i < m; ++i) 
    {
        cin >> num;
        
        if (binary_search(v.begin(), v.end(), num)) 
            cout << 1 << nl;
        else 
            cout << 0 << nl;
    }
    return 0;
}