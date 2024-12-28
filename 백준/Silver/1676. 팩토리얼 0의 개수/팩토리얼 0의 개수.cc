#include <iostream>

#define nl '\n';

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, count{0};
	cin >> n;

	for (int i{ 5 }; i <= n; i *= 5)
	{
		count += (n / i);
	}
	cout << count;

    return 0;
}