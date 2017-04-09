#include <iostream>

using namespace std;

int main()
{
	int n;
	char temp;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i){
		cin >> temp;
		if (temp == '[')
			arr[i] = 1;
		else
			arr[i] = -1;
	}
	int depth = 0, width = 0, sum = 0;
	for (int i = 0; i < n - 1; ++i){
		sum += arr[i];
		if (sum > depth)
			depth = sum;
		if (arr[i] == 1 && arr[i + 1] == -1)
			width += 4;
		else
			width++;
	}
	int height = depth * 2 + 1;
	width++;

	char** res = new char*[height];
	for (int i = 0; i < height; ++i)
		res[i] = new char[width];

	for (int i = 0; i < height; ++i){
		for (int j = 0; j < width; ++j)
			res[i][j] = ' ';
	}

	for (int i = 1; i < height - 1; ++i){
		res[i][0] = '|';
	}
	res[0][0] = '+';
	res[height - 1][0] = '+';
	res[0][1] = '-';
	res[height - 1][1] = '-';
	int c = 0;
	int plus = 0;
	for (int i = 1; i < n; ++i){
		if (arr[i - 1] == 1 && arr[i] == -1)
			c += 4;
		else
			c++;
		if (arr[i] == arr[i - 1] && arr[i] == 1)
			plus++;
		else if (arr[i] == arr[i - 1] && arr[i] == -1)
			plus--;
		res[plus][c] = '+';
		res[height - 1 - plus][c] = '+';
		res[plus][c + arr[i]] = '-';
		res[height - plus - 1][c + arr[i]] = '-';

		for (int j = plus + 1; j < height - plus - 1; ++j)
			res[j][c] = '|';
	}
	for (int i = 0; i < height; ++i){
		for (int j = 0; j < width; ++j)
			cout << res[i][j];
		cout << endl;
	}
	system("pause");
	return 0;
}