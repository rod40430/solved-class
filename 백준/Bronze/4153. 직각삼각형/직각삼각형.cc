#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int a;
    while (1)
    {
        vector<int> num(3);

        for (int i{}; i < 3; ++i)
        {
            cin >> a;
            num[i] = a;
        }
        if (num[0] == 0 and num[1] == 0 and num[2] == 0)
            break;

        int max{ *max_element(num.begin(), num.end()) }, min{};

        for (int i{}; i < num.size(); ++i)
        {
            if (i != max_element(num.begin(), num.end()) - num.begin())
                min += pow(num[i], 2);
        }

        if (pow(max, 2) == min)
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }

    return 0;
}