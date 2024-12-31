#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

#define nl '\n'

using namespace std;

bool com(const pair<int, string> a, const pair<int, string> b);

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	pair<int, string> a;
	vector<pair<int, string>> num{};

	for (int i{0}; i < n; ++i)
	{
		cin >> a.first >> a.second;
		num.push_back(a);
	}

	stable_sort(num.begin(), num.end(), com);

	for (auto x : num)
		cout << x.first << ' ' << x.second << nl;

    return 0;
}

bool com(const pair<int, string> a, const pair<int, string> b)
{
	return a.first < b.first;
}