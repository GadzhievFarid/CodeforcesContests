#include <iostream>

using namespace std;

void checkline(int** arr, int k, int &time)
{
	for (int i = 2; i <= arr[k][0]; ++i)
	{
		if (arr[k][i] != arr[k][i - 1] + 1)
		{
			time += 2*(arr[k][0] - i) + 3;
			return;
		}
	}
	time++;
	return;
}

int main()
{
	int n, k, time = -1;
	cin >> n >> k;
	int** arr = new int*[n];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[n];
	}
	for (int i = 0; i < k; ++i)
	{
		cin >> arr[i][0];
		for (int j = 1; j <= arr[i][0]; ++j)
			cin >> arr[i][j];
	}
	for (int i = 0; i < k; ++i)
	{
		checkline(arr, i, time);
	}
	cout << time << endl;
	return 0;
}