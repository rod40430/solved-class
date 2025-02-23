#include <iostream>
#define nl "\n"

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;  cin >> n;
	int ans{};

	while (n >= 0)
	{
		if (n % 5 == 0)
		{
			ans += (n / 5);
			cout << ans << nl;
			return 0;
		}
		n -= 3;
		ans++;
	}
	
	cout << -1 << nl;

	return 0;
}