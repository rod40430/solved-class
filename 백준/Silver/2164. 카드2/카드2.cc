#include <iostream>
#include <queue>
#define nl "\n"

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n;	cin >> n;
	queue<int> arr;

	for (int i{0}; i < n; ++i)
	{
		arr.push(i + 1);
	}

	for (; arr.size() != 1;)
	{
		arr.pop();
		arr.push(arr.front());
		arr.pop();
	}
	
	cout << arr.front() << nl;

	return 0;
}