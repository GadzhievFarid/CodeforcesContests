#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

void sorts(string& in, int i, int j, int k)
{
	
	if (k == 1)
	{
		string temp = in.substr(i - 1, j - i + 1);
		sort(temp.begin(), temp.end());
		for (int z = i - 1; z <= j - 1; ++z)
			in[z] = temp[z - i + 1];
	}
	else
	{
		string temp = in.substr(i - 1, j - i + 1);
		sort(temp.begin(), temp.end(), greater<int>());
		for (int z = i - 1; z <= j - 1; ++z)
			in[z] = temp[z - i + 1];
	}
		
}

int main()
{
	int n, q;
	cin >> n >> q;
	string in;
	cin >> in;
	int i, j, k;
	for (int z = 0; z < q; ++z)
	{
		cin >> i >> j >> k;
		sorts(in, i, j, k);
	}
	cout << in << endl;
	return 0;
}