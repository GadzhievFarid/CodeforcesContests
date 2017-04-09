#include <iostream>

using namespace std;

int main()
{
	int h, w, n;
	cin >> h >> w >> n;
	int** arr = new int*[h];
	for (int i = 0; i < h; ++i)
		arr[i] = new int[w];
	for (int i = 0; i < h; ++i)
		for (int j = 0; j < w; ++j)
		{
		if (i == 0 || j == 0)
			arr[i][j] = 1;
			arr[i][j] = 0;
		}
	while (n)
	{
		int x, y;
		cin >> x >> y;
		arr[x][y] = -1;
	}
	for (int i = 1; i < h; ++i)
	{
		for (int j = 1; j < w; ++j)
		{
			if 
		}
	}
	return 0;
}