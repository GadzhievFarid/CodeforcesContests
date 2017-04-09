#include <iostream>
#include <algorithm>

using namespace std;

bool check(int n, int* l)
{
	if (n == 1)
		return 1;
	double numb = n / 2;
	int count = 0;
	int max = *max_element(l, l + n);
	for (int i = 0; i < n; ++i)
		if (l[i] == max) count++;
	if (count > numb)
		return 1;
	else
		return 0;
}

void sorts(int* l, int* d, int n)
{
	for (int i = 1; i < n; ++i)
		for (int j = 1; j < n; ++j)
		{
			if (l[i] < l[i - 1])
			{
				swap(l[i], l[i - 1]);
				swap(d[i], d[i - 1]);
			}
		}
}

int main()
{
	int n, ans, maxlen, cur = 0;
	cin >> n;
	int* l = new int[n];
	int* d = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> l[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> d[i];
	}
	sorts(l, d, n);
	maxlen = l[0];

	/*int** arr = new int*[2];
	for (int i = 0; i < 2; ++i)
		arr[i] = new int[max];
	for (int i = 0; i < 2; ++i)
		for (int j = 0; j <= max; ++j)
			arr[i][j] = 0;
	for (int i = 0; i < n; ++i)
	{
		arr[0][l[i]]++;
		arr[1][l[i]] += d[i];
	}*/
	//
	//for (int i = 0; i < max; ++i)
	//	for (int j = 0; j < max; ++j)
	//	{
	//	if (arr[1][j] < arr[1][j + 1])
	//	{
	//		swap(arr[1][j], arr[1][j + 1]);
	//		swap(arr[0][j], arr[0][j + 1]);
	//	}
	//	}
	//for (int i = 0; i < 2; ++i)
	//{
	//	for (int j = 0; j <= max; ++j)
	//		cout << arr[i][j] << " ";
	//	cout << endl;
	//}


	delete[]l;
	delete[]d;
	return 0;
}