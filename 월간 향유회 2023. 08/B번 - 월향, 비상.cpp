#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	priority_queue<int> managers;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		managers.push(a);
	}

	vector<int[2]> milestones(m);
	for (int i = 0; i < m; i++)
		cin >> milestones[i][0] >> milestones[i][1];

	int day = 0;
	int quality = 0;
	for (int i = 0; i < m; i++)
	{
		day = milestones[i][0];

		int nextQuality = milestones[i][1];

		while (nextQuality > quality)
		{
			if (managers.empty())
			{
				cout << -1;
				return 0;
			}

			int a = managers.top() + day;
			managers.pop();

			quality += a;
		}
	}

	while (!managers.empty())
	{
		quality += (managers.top() + day);
		managers.pop();
	}

	cout << quality;

	return 0;
}