#include <iostream>
#include <string>
#include <algorithm>

#define nl '\n'

using namespace std;

int arr[50][50], board1[8][8], board2[8][8], ans;

void sol(int a, int b)
{
	int tmp1, tmp2;
	tmp1 = tmp2 = 0;
	for (int i{}; i < 8; ++i)
		for (int j{}; j < 8; ++j)
		{
			if (arr[a + i][b + j] != board1[i][j]) tmp1++;
			if (arr[a + i][b + j] != board2[i][j]) tmp2++;
		}
	ans = min(ans, tmp1);
	ans = min(ans, tmp2);
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, m; cin >> n >> m;
	ans = 64;

	for (int i{}; i < n; ++i)
	{
		string s; cin >> s;
		for (int j{}; j < m; ++j)
			if (s[j] == 'B') arr[i][j] = 1;
			else arr[i][j] = 0;
	}

	for (int i{}; i < 8; ++i) for (int j{}; j < 8; ++j)
	{
		board1[i][j] = (i + j + 1) % 2;
		board2[i][j] = (i + j) % 2;
	}

	for (int i{}; i + 8 <= n; ++i)
		for (int j{}; j + 8 <= m; j++)
			sol(i, j);

	cout << ans << nl;

    return 0;
}