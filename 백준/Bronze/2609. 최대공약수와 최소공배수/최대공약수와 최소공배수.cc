#include <iostream>
#include <utility>

using namespace std;

int gcd(pair<int, int> num) 
{
	int a{ num.first }, b{ num.second }, c{ a % b };

	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}

	return b;
}

int lcm(pair<int, int> num)
{
	return (num.first * num.second) / gcd(num);
}

int main(void)
{
    pair<int, int> num;
    cin >> num.first >> num.second;

	cout << gcd(num) << endl << lcm(num) << endl;

    return 0;
}