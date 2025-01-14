#include <iostream>

#define nl '\n'

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long n, m;
	cin >> n >> m;
	if (n < m)
		cout << m - n << nl;
	else
		cout << n - m << nl;

    return 0;
}