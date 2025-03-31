#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define endl			'\n'

#ifndef INT_MAX
#define INT_MAX			2147483647
#define INT_MIN			-2147483648
#define LONG_LONG_MAX	9223372036854775807
#define LONG_LONG_MIN	-9223372036854775808
#endif

#define ABS(A)			(((A) > 0) ? (A) : (-A))
#define MAX(A,B)		(((A) > (B)) ? (A) : (B))
#define MIN(A,B)		(((A) < (B)) ? (A) : (B))

using namespace std;

bool visited[3][3];
int numCnt = 9;
int ans = 0;
int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };

void dfs(int cnt, int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dir[i][0];
		int ny = y + dir[i][1];
		if (nx < 0 || ny < 0 || nx >= 3 || ny >= 3)
			continue;
		if (!visited[nx][ny])
		{
			visited[nx][ny] = true;
			dfs(cnt + 1, nx, ny);
			visited[nx][ny] = false;
		}
	}

	if (cnt == numCnt)
		ans++;

	return;
}

int main()
{
	ios::sync_with_stdio(0);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int k;
	cin >> k;

	int x = (k - 1) / 3;
	int y = (k - 1) % 3;

	visited[x][y] = true;

	dfs(1, x, y);

	cout << ans;

	return 0;
}