#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	vector<ll> d(n);
	for (int i = 0; i < n; i++)
		cin >> d[i];
	sort(d.begin(), d.end(), greater<ll>());

	vector<pair<ll, int>> boss(k);
	for (int i = 0; i < k; i++)
		cin >> boss[i].first >> boss[i].second;
	sort(boss.begin(), boss.end(), greater<pair<ll, int>>());

	ll meso = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (boss[j].first <= d[i])
			{
				meso += boss[j].second;

			}
		}
	}

	cout << meso;

	return 0;
}