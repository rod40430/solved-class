#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> num(10, 0);
    int a, b, c;
    cin >> a >> b >> c;
    
    int sum = a * b * c;

    for (; sum != 0;)
    {
        for (int j{0}; j <= 9; ++j)
        {
            if (sum % 10 == j)
            {
                num[j]++;
                sum /= 10;
            }
        }
    }

    for (auto x : num)
    {
        cout << x << endl;
    }

    return 0;
}