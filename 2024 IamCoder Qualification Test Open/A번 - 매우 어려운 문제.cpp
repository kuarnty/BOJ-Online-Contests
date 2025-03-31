#include <iostream>

using namespace std;

int main()
{
	long long n, m;
	cin >> n >> m;
	if (n >= m)
	{
		cout << 0;
		return 0;
	}

	long long r = 1;
	for (int i = 2; i <= n; i++)
	{
		r *= i;
		if (r > m)
			r %= m;
		else if (r == m)
		{
			cout << 0;
			return 0;
		}
	}
	cout << r;
	return 0;
}