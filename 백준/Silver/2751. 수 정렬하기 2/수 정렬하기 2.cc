#include <iostream>
#include <vector>
#include <algorithm>

#define nl '\n';

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int> num{};
	for (int i{0}; i < n; ++i)
	{
		int a;
		cin >> a;
		num.push_back(a);
	}
	sort(num.begin(), num.end());

	for (auto x : num)
		cout << x << nl;


    return 0;
}