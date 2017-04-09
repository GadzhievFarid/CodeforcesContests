#include <iostream>

using namespace std;

int main()
{
	long long int n, ans1 = 0, ans2, max = 0; cin >> n;
	if (n == 1)
		ans2 = 0;
	else 
		ans2 = n;
	long long int* arr = new long long int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	long long int* maxarr = new long long int[max + 1];
	for (int i = 0; i <= max; ++i)
	{
		maxarr[i] = 0;
	}
	for (int i = 0; i < n; ++i)
	{
		maxarr[arr[i]]++;
	}
	long long int max2 = 0, numb = -1;
	for (int i = 0; i <= max; ++i)
	{
		if (maxarr[i] > max2)
		{
			max2 = maxarr[i];
		}
	}
	long long int r = 0, l = 0;
	for (int i = 0; i <= max; ++i)
	{
		if (maxarr[i] == max2)
		{
			numb = i;
			for (int j = 0; j < n; ++j)
			{
				if (arr[j] == numb)
				{
					l = j;
					break;
				}
			}
			for (int j = n - 1; j >= 0; --j)
			{
				if (arr[j] == numb)
				{
					r = j;
					break;
				}
			}
			if (r - l < ans2 - ans1)
			{
				ans1 = l;
				ans2 = r;
			}
		}
	}
	cout << ans1 + 1 << " " << ans2 + 1;
	delete[]arr;
	delete[]maxarr;
	return 0;
}