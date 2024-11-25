#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> a;
    for (int i{1}; i <= 8; ++i)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }

    int bl1{ 0 }, bl2{ 0 };
    int i{ 1 }, j{ 8 };
    for (auto x : a)
    {
        if (x == i)
            ++bl1;

        if (x == j)
            ++bl2;
        ++i;
        --j;
    }

    if (bl1 == 8)
        cout << "ascending" << endl;
    else if (bl2 == 8)
        cout << "descending" << endl;
    else
        cout << "mixed" << endl;

    return 0;
}