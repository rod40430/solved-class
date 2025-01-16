#include <iostream>
#include <string>

#define nl '\n'

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string word;
	cin >> word;

	for (int i{}; i < word.size(); ++i)
	{
		if (word[i] >= 65 and word[i] <= 90)
			word[i] += 32;
		else
			word[i] -= 32;
	}

	cout << word << nl;

    return 0;
}