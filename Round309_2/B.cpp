#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, match = 0, ans = 0;
	cin >> n;
	string* room = new string[n];
	for (int i = 0; i < n; ++i)
		cin >> room[i];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (room[i] == room[j])
				match++;
		}
		if (match > ans)
			ans = match;
		match = 0;
	}
	cout << ans + 1 << endl;
	return 0;
}