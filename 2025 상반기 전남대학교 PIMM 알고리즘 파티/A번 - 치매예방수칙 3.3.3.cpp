#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include <queue>

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

int main()
{
	ios::sync_with_stdio(0);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	cin >> n;
	string s;
	cin >> s;

	string separators[4] = { ".", "|", ":", "#" };
	queue<string> result;
	result.push(s);
	for (int i = 0; i < 4; i++)
	{
		int size = result.size();
		for (int j = 0; j < size; j++)
		{
			string ss = result.front();
			result.pop();
			int curPosition = 0;
			int prevPosition = -1;
			while ((curPosition = ss.find(separators[i], prevPosition + 1)) != string::npos)
			{
				int len = curPosition - prevPosition - 1;
				result.push(ss.substr(prevPosition + 1, len));
				prevPosition = curPosition++;
			}
			result.push(ss.substr(prevPosition + 1));
		}
	}

	int ans = 0;
	while (!result.empty())
	{
		ans += stoi(result.front());
		result.pop();
	}

	cout << ans;

	return 0;
}