#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> library;
	int n;
	cin >> n;
	int max = 0;
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		char temp;
		cin >> temp;
		if (temp == '+')
		{
			int tem; cin >> tem;
			library.insert(tem);
			count++;
		}
		else
		{
			int tem; cin >> tem;
			if (library.count(tem) == 1)
			{
				library.erase(tem); count--;
			}
			else
				max++;
		}
		if (max < count)
			max = count;
	}
	cout << max << endl;
	return 0;
}