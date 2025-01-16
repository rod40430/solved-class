#include <iostream>

#define nl '\n'

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, sum{ 1 };;
	cin >> n;

	for (int i{1}; i <= n; ++i)
		sum *= i;
	
	cout << sum << nl;

    return 0;
}