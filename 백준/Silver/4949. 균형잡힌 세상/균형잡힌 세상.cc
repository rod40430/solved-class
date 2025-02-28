#include <iostream>
#include <string>
#include <stack>
#define nl "\n"

using namespace std;

int main(void)
{
	

	for (; true;)
	{
		string str;
		bool b_a{ false };
		stack<char> s;
		
		getline(cin, str);

		if (str == ".")
			break;

		for (auto c : str)
		{
			if ((c == '(') or (c == '['))
				s.push(c);

			else if (c == ')')
			{
				if (!s.empty() and s.top() == '(')
					s.pop();
				else
				{
					b_a = true;
					break;
				}
			}

			else if (c == ']')
			{
				if (!s.empty() and s.top() == '[')
					s.pop();
				else
				{
					b_a = true;
					break;
				}
			}
		}

		if (b_a == false and s.empty())
			cout << "yes" << nl;
		else
			cout << "no" << nl;

	}

	

	return 0;
}