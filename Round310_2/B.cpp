#include <iostream>

using namespace std;

void rotate(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (i % 2 == 0)
		{
			arr[i] = ((arr[i]++) % n);
			if (arr[i] >= n)
				arr[i] -= n;
		}
		else
		{
			arr[i] = ((arr[i]--) % n);
			if (arr[i] < 0)
				arr[i] += n;
		}
	}
}

bool check(int* arr, int n)
{
	if (arr[0] != 0)
		return 0;
	for (int i = 1; i < n; ++i)
	{
		if (arr[i] != arr[i - 1] + 1)
			return 0;
	}
	return 1;
}

int main()
{
	int n;
	bool ok = 0;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (check(arr, n))
		{
			ok = 1;
			break;
		}
		rotate(arr, n);

	}
	cout << (ok ? "Yes" : "No") << endl;
	return 0;
}