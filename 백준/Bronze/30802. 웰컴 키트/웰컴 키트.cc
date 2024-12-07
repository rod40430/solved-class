#include <iostream>
#include <vector>

#define nl '\n';

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> num(6);
	int n, t, p;
	cin >> n;

	for (int i{}; i < 6; ++i)
		cin >> num[i];

	cin >> t >> p;
	int t_shirt{};

	for (int i{}; i < 6; ++i)
		t_shirt += (num[i] + t - 1) / t;

	cout << t_shirt << nl;
	cout << n / p << ' ' << n % p << nl;

    return 0;
}