#include<iostream>
#include<vector>
#include<algorithm>

#define nl '\n'

using namespace std;

bool com(const pair<int, int> a, const pair<int, int> b);

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	pair<int, int> a;
	vector<pair<int, int>> num{};

	for (int i{ 0 }; i < n; ++i)
	{
		cin >> a.first >> a.second;
		num.push_back(a);
	}

	sort(num.begin(), num.end(), com);

	for (auto x : num)
		cout << x.first << ' ' << x.second << nl;

	return 0;
}

bool com(const pair<int, int> a, const pair<int, int> b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}