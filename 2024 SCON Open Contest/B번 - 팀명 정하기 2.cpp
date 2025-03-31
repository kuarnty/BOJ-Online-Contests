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

bool isValid(string name)
{
	if (name.length() > 10)
		return false;

	int capital = 0, small = 0, number = 0, hypen = 0;
	
	for (int i = 0; i < name.length(); i++)
	{
		int ascii = (int)(name[i]);
		if (ascii >= 65 && ascii <= 90)
			capital++;
		else if (ascii >= 97 && ascii <= 122)
			small++;
		else if (ascii >= 48 && ascii <= 57)
			number++;
		else if (ascii == 45)
			hypen++;

	}

	if (number == name.length())
		return false;
	else if (capital > small)
		return false;
	else
		return true;
}

int main()
{
	ios::sync_with_stdio(0);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n;
	cin >> n;
	while (n--)
	{
		string name;
		cin >> name;
		if (isValid(name))
			cout << name;
	}

	return 0;
}