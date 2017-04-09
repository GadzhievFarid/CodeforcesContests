#include <iostream>
#include <string>
#include <vector>

using namespace std;

int find(vector<pair<int, int>> arr, int n)
{
	int max = 0;
	int temp = 0;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i].second == 0)
			temp += arr[i].first;
		else
		{
			if (max < temp)
				max = temp;
			temp = 0;
		}
	}
	if (temp > max)
		max = temp;
	return max;
}

int main()
{
	int n;
	cin >> n;
	int temp;
	vector <pair<int, int>> arr;
	int* pi = new int[n];
	for (auto i = 0; i < n; ++i)
	{
		cin >> temp;
		arr.push_back(make_pair(temp, 0));
	}

	for (int i = 0; i < n; ++i)
		cin >> pi[i];

	for (int i = 0; i < n; ++i)
	{
		arr[pi[i] - 1].second = 1;
		cout << find(arr, n) << endl;
	}
	return 0;
}