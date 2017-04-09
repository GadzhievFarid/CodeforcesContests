#include <iostream>

using namespace std;

int main()
{
	int cand, town;
	cin >> cand >> town;
	int** arr = new int*[town];
	for (int i = 0; i < town; ++i)
		arr[i] = new int[cand];
	for (int i = 0; i < town; ++i)
		for (int j = 0; j < cand; ++j)
			cin >> arr[i][j];
	int* candid = new int[cand];
	for (int i = 0; i < cand; ++i)
		candid[i] = 0;
	int max = 0, numb = 0;
	for (int i = 0; i < town; ++i)
	{
		for (int j = 0; j < cand; ++j)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				numb = j;
			}
		}
		candid[numb]++;
		numb = 0;
		max = 0;
	}
	for (int i = 0; i < cand; ++i)
	{
		if (candid[i] > max)
		{
			max = candid[i]; numb = i + 1;
		}
	}
	cout << numb;
	return 0;
}