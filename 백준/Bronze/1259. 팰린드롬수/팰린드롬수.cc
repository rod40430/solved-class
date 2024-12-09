#include <iostream>
#include <string>

#define nl '\n';

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s_num;
	for (; cin >> s_num;)
	{
		if (s_num.size() == 1 and s_num[0] == '0')
			return 0;

		bool y_n{ 1 };

		for (int i{ 0 }, j = s_num.size() - 1; i < s_num.size() / 2; ++i,--j)
		{
			if (s_num[i] != s_num[j])
			{
				cout << "no" << nl;
				y_n = 0;
				break;
			}
		}
		if (y_n)
			cout << "yes" << nl;
	}

    return 0;
}