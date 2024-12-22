#include <iostream>
#include <vector>
#include <algorithm>

#define nl '\n';

using namespace std;

bool bool_compair(string a, string b);

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> word;
	int n;
	cin >> n;
	
	string a;
	for (int i{}; i < n; ++i)
	{
		cin >> a;
		if (a.size() > 50)
			continue;
		word.push_back(a);
	}

	sort(word.begin(), word.end(), bool_compair);
	word.erase(unique(word.begin(), word.end()), word.end());

	for (auto x : word)
		cout << x << nl;

    return 0;
}

bool bool_compair(string a, string b)
{ 
	if (a.length() == b.length()) 
	{
		return a < b;
	}
	else 
	{
		return a.length() < b.length();
	}
}
