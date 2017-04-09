#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
	int n, s, p, q, bcount = 0, scount = 0;
	char chtemp;
	cin >> n >> s;
	//if (n == 1)
	//{
	//	cin >> chtemp >> p >> q;
	//	cout << chtemp << " " << p << " " << q << endl;
	//	return 0;
	//}
	int** arr = new int*[4];
	for (int i = 0; i < 4; ++i)
		arr[i] = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> chtemp;
		cin >> p >> q;
		if (chtemp == 'B')
		{
			arr[0][bcount] = p;
			arr[1][bcount] = q;
			bcount++;
		}
		else
		{
			arr[2][scount] = p;
			arr[3][scount] = q;
			scount++;
		}
	}
	int tempb = 0, temps = 0;
	for (int z = 0; z < bcount; ++z)
	{
		for (int i = z + 1; i < bcount; ++i)
		{
			if (arr[0][z] == arr[0][i])
			{
				arr[1][z] += arr[1][i];
				arr[1][i] = 0;
				tempb++;
			}

		}
	}
	for (int z = 0; z < scount; ++z)
	{
		for (int i = z + 1; i < scount; ++i)
		{
			if (arr[2][z] == arr[2][i])
			{
				arr[3][z] += arr[3][i];
				arr[3][i] = 0;
				temps++;
			}

		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (j == max(bcount, scount) - 1)
				break;
			if (arr[0][j] > arr[0][j + 1] && j < bcount)
			{
				swap(arr[0][j], arr[0][j + 1]);
				swap(arr[1][j], arr[1][j + 1]);
			}
			if (arr[2][j] > arr[2][j + 1] && j < scount)
			{
				swap(arr[2][j], arr[2][j + 1]);
				swap(arr[3][j], arr[3][j + 1]);
			}
			
		}
	}
		for (int i = scount - 1; i >= 0; --i)
		{
			if (arr[3][i] != 0)
			{
				cout << "S " << arr[2][i] << " " << arr[3][i] << " " << endl;

			}

		}
		int temptemp = bcount;
		for (int i = bcount - 1; i >= bcount - s - tempb; --i)
		{
			if (temptemp <= 0)
				break;
			temptemp--;
			if (arr[1][i] != 0)
				cout << "B " << arr[0][i] << " " << arr[1][i] << " " << endl;
		}
	return 0;
}