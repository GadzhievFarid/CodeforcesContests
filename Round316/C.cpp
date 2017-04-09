#include <iostream>
#include <string>

using namespace std;

int f(string s, int n)
{
	int count = 0;
	for (int i = 0; i < n - 1; ++i)
	{
		if (s[i] == '.' && s[i + 1] == '.')
			count++;
	}
	return count;
}

int main()
{
	int n, m;
	string s;
	cin >> n >> m;
	cin >> s;
	char temp;
	int t;
	int cur = f(s, n);
	for (int i = 0; i < m ; ++i)
	{
		cin >> t >> temp;
		t--;
		if (temp != '.')
		{
			if (s[t] != '.')
			{
				cout << cur << endl;
			}
			else if (t == n - 1)
			{
				if (s[t - 1] == '.')
					cout << cur - 1 << endl;
				else
					cout << cur << endl;
			}
			else if (t == 0)
			{
				if (s[1] == '.')
					cout << cur - 1 << endl;
				else
					cout << cur << endl;
			}
			else if (s[t - 1] == '.' && s[t + 1] == '.')
			{
				cur -= 2;
				cout << cur << endl;
			}
			else if (s[t - 1] == '.' || s[t + 1] == '.')
			{
				cur--;
				cout << cur << endl;
			}
			else
				cout << cur << endl;
		}
		else
		{
			if (s[t] == '.')
			{
				cout << cur << endl;
				
			}
			else if (t == n - 1)
			{
				if (s[t - 1] == '.')
				{
					cur++;
					cout << cur << endl;
				}
				else
					cout << cur << endl;
				
			}
			else if (t == 0)
			{
				if (s[1] == '.')
				{
					cur++;
					cout << cur << endl;
				}
				else
					cout << cur << endl;
			}
			else if (s[t - 1] == '.' && s[t + 1] == '.')
			{
				cur += 2;
				cout << cur << endl;
			}
			else if (s[t - 1] == '.' || s[t + 1] == '.')
			{
				cur++;
				cout << cur << endl;
			}
			else
				cout << cur << endl;
		}
		s[t] = temp;
	}
	return 0;
}