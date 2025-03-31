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

	int t;
	cin >> t;
	while (t--)
	{
		int n, s, e;
		cin >> n >> s >> e;
		if (s > e)
		{
			int a = s;
			s = e;
			e = a;
		}

		if (n == 2)
		{
			cout << 0 << endl;
			continue;
		}

		if (s + 1 == e)
			cout << 1 << endl;
		else if (s == 1 && e == n)
			cout << 0 << endl;
		else if (s == 1 && e != n)
			cout << 1 << endl;
		else
			cout << 2 << endl;
	}

	return 0;
}