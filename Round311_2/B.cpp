#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long int n;
	long double w, ans;
	cin >> n >> w;
	double* arr = new double[2 * n];
	int maxarr = 0;
	for (int i = 0; i < 2 * n; ++i)
	{
		cin >> arr[i];
	}
	sort(arr, arr + 2 * n);
	long double temp = min(arr[0], arr[n] / 2);
	ans = min(3 * temp * n, w);
	cout << fixed << ans << endl;
	return 0;
}