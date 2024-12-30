#include <iostream>
#include <vector>
#include <utility>

#define nl '\n';

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<pair<int, int>> num{};
	vector<int> count(n, 1);
	for (int i{0}; i < n; ++i)
	{
		pair<int, int> a;
		cin >> a.first >> a.second;
		num.push_back(a);
	}

	for (int i{}; i < n; ++i)
	{
		for (int j{}; j < n; ++j)
		{
			if (num[i].first < num[j].first and num[i].second < num[j].second)
				count[i]++;
		}
	}

	for (auto x : count)
		cout << x << ' ';

    return 0;
}