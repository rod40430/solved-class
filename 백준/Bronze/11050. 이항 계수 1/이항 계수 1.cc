#include <iostream>

#define nl '\n';

using namespace std;

int f_int(int num)
{
	int result{ 1 };
	for (int i{ 1 }; i <= num; ++i)
		result = result * i;
	return result;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	cout << f_int(n) / (f_int(k) * f_int(n - k)) << nl;

    return 0;
}