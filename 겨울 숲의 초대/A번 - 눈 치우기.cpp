#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int n;
	cin >> n;

	priority_queue<int> pq;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		pq.push(a);
	}
	int time = 0;

	while (!pq.empty() && time <= 1440)
	{
		int a = pq.top();
		pq.pop();

		if (pq.empty())
		{
			time += a;
			break;
		}

		int b = pq.top();
		pq.pop();

		time++;
		if (--a != 0)
			pq.push(a);
		if (--b != 0)
			pq.push(b);
	}

	cout << (time > 1440 ? -1 : time);

	return 0;
}