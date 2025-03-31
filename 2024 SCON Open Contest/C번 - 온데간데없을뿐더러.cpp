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

int main()
{
	ios::sync_with_stdio(0);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> a[2];
	for (int i = 0; i < n; i++)
	{
		int num = 0;
		cin >> num;
		if (num >= 10)
		{
			a[0].push_back(num / 10);
			a[0].push_back(num % 10);
		}
		else
			a[0].push_back(num);
	}
	for (int i = 0; i < n; i++)
	{
		int num = 0;
		cin >> num;
		if (num >= 10)
		{
			a[1].push_back(num / 10);
			a[1].push_back(num % 10);
		}
		else
			a[1].push_back(num);
	}

	int small = -1;

	if (a[0].size() != a[1].size())
	{
		small = a[0].size() < a[1].size() ? 0 : 1;
		for (int i = 0; i < a[small].size(); i++)
			cout << a[small][i];
		return 0;
	}

	for (int i = 0; i < a[0].size(); i++)
	{
		if (a[0][i] == a[1][i])
			continue;
		else if (a[0][i] < a[1][i])
			small = 0;
		else if (a[0][i] > a[1][i])
			small = 1;

		for (int i = 0; i < a[small].size(); i++)
			cout << a[small][i];
		return 0;
	}

	for (int i = 0; i < a[0].size(); i++)
		cout << a[0][i];

	return 0;
}