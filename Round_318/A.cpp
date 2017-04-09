#include <iostream>
#include <algorithm>

using namespace std;

bool check(int n, int* arr)
{
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] >= arr[0])
			return 0;
	}
	return 1;
}

int main()
{
	int n; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	if (check(n, arr) == 1)
		cout << 0;
	else
	{
		int max = *max_element(&arr[0], &arr[n - 1]);
		int count = 0;
		for (int i = 1; i < n; ++i)
		{
			if (arr[i] == max)
				count++;
		}
		int ans;
		(count == 1)? ans = max - arr[0] - 2: ans = ((max - arr[0]) / count)*count;
		cout << ans;
	}
	return 0;
}