#include <iostream>

using namespace std;

int main(void)
{
    int t, h, w, n;
    cin >> t;

    for (int i{}; i < t; ++i)
    {
        cin >> h >> w >> n;

        int w2{ 0 }, h2{ 1 };

        while(n > h)
        {
            ++h2;
            if (h2 >= 10)
            {
                h2 -= 10;
                ++w2;
            }
            n -= h;
        }
        cout << n << w2 << h2 << endl;
    }

    return 0;
}