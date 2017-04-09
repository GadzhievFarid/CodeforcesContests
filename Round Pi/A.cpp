#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	cout << arr[1] - arr[0] << " " << arr[n - 1] - arr[0] << endl;
	for (int i = 1; i < n - 1; ++i)
	{
		if (abs(arr[i] - arr[i - 1]) < abs(arr[i] - arr[i + 1]))
			cout << abs(arr[i] - arr[i - 1]);
		else
			cout << abs(arr[i] - arr[i + 1]);
		cout << " ";
		if (abs(arr[i] - arr[0]) > abs(arr[i] - arr[n - 1]))
			cout << abs(arr[i] - arr[0]);
		else
			cout << abs(arr[i] - arr[n - 1]);
		cout << endl;
	}
	cout << arr[n - 1] - arr[n - 2] << " " << arr[n - 1] - arr[0] << endl;
	delete[]arr;
	return 0;
}