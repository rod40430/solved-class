#include <iostream>

#define nl '\n';

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int val{ 666 };
	int cnt{};
	while (1)
	{
		for (int i{val}; i >= 666; i /= 10)
		{
			if (i % 1000 == 666)
			{
				cnt++;
				break;
			}
		}

		if (N == cnt)
			break;
		else
			val++;
	}

	cout << val;

    return 0;
}