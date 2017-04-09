#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, zero = 0, one = 0;
	string s;
	cin >> n;
	cin >> s;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '1')
			one++;
		else
			zero++;
	}
	cout << ((zero > one) ? zero - one : one - zero);
	return 0;
}