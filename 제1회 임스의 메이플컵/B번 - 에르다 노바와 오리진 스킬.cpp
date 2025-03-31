#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	vector<int> b(m);

	int immuneTimeA = 0, immuneTimeB = 0;
	int coolTimeA = 0, coolTimeB = 0;
	int countA = 0, countB = 0;

	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++)
	{
		if (a[i] >= coolTimeA)
		{
			coolTimeA = a[i] + 100;
			if (a[i] >= immuneTimeA)
			{
				immuneTimeA = a[i] + 90;
				countA++;
			}
		}
	}

	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(b.begin(), b.end());

	for (int i = 0; i < m; i++)
	{
		if (b[i] >= coolTimeB)
		{
			coolTimeB = b[i] + 360;
			if (b[i] >= immuneTimeB)
			{
				immuneTimeB = b[i] + 90;
				countB++;
			}
		}
	}

	cout << countA << ' ' << countB;

	return 0;
}