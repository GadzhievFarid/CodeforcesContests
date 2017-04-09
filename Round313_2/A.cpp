#include <iostream>

using namespace std;

int main()
{
	int n;
	bool ok = 0;
	cin >> n;
	while (n)
	{
		int temp;
		cin >> temp;
		if (temp == 1)
		{
			ok = 1;
		}
		n--;
	}
	(ok == 1) ? (cout << -1) : cout << 1;
	return 0;
}