#include <iostream>

#define nl '\n'

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string word;
	cin >> word;

	if (word == "A+")
		cout << "4.3" << nl;
	else if (word == "A0")
		cout << "4.0" << nl;
	else if (word == "A-")
		cout << "3.7" << nl;
	else if (word == "B+")
		cout << "3.3" << nl;
	else if (word == "B0")
		cout << "3.0" << nl;
	else if (word == "B-")
		cout << "2.7" << nl;
	else if (word == "C+")
		cout << "2.3" << nl;
	else if (word == "C0")
		cout << "2.0" << nl;
	else if (word == "C-")
		cout << "1.7" << nl;
	else if (word == "D+")
		cout << "1.3" << nl;
	else if (word == "D0")
		cout << "1.0" << nl;
	else if (word == "D-")
		cout << "0.7" << nl;
	else
		cout << "0.0" << nl;

    return 0;
}