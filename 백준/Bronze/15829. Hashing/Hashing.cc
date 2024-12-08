#include <iostream>
#include <cmath>

#define nl '\n';

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long sum{ 0 }, m{ 1234567891 }, r{ 1 };
	int l;
	cin >> l;

	for (int i{ 0 }; i < l; ++i)
	{
		char a;
		cin >> a;
		sum = (sum + (a - 96) * r) % m;
		r = (r * 31) % m;
	}

	cout << sum << nl;

    return 0;
}