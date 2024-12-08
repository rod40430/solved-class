#include <iostream>
#include <cmath>

#define nl '\n';

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sum{ 0 };
	int l;
	cin >> l;

	for (int i{ 0 }; i < l; ++i)
	{
		char a;
		cin >> a;
		sum += (a - 96) * pow(31, i);
	}

	cout << sum << nl;

    return 0;
}