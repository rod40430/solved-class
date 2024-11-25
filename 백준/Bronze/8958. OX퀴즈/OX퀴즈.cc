#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int a;
    cin >> a;

    for (int i{}; i < a; ++i)
    {
        string ox;
        cin >> ox;
        int j{ 1 }, sum{ 0 };
        for (auto x : ox)
        {
            if (x == 'O')
            {
                sum += j;
                ++j;
            }
            else if (x == 'X')
            {
                j = 1;
            }
        }
        cout << sum << endl;
    }

    return 0;
}