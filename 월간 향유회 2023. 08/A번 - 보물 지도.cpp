#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	priority_queue<int> R, U;
	priority_queue<int, vector<int>, greater<int>> L, D;
		
	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		char dir;
		cin >> dir;
		switch (dir)
		{
		case 'L':
			L.push(x);
			break;
		case 'R':
			R.push(x);
			break;
		case 'U':
			U.push(y);
			break;
		case 'D':
			D.push(y);
			break;
		default:
			break;
		}
	}

	if (R.empty() || U.empty() || L.empty() || D.empty())
		cout << "Infinity";
	else
	{
		long long hor = L.top() - R.top()-1;
		long long ver = D.top() - U.top()-1;
		cout << hor * ver;
	}


	return 0;
}