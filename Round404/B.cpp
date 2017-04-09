#include <iostream>

using namespace std;

int main()
{
	int n, m;
	long long min1 = 0, max1 = 1e9, min2 = 0, max2 = 1e9, tmp1, tmp2, ans;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> tmp1 >> tmp2;
		if (tmp1 > min1)
			min1 = tmp1;
		if (tmp2 < max1)
			max1 = tmp2;
	}
	cin >> m;
	for (int i = 0; i < m; ++i){
		cin >> tmp1 >> tmp2;
		if (tmp1 > min2)
			min2 = tmp1;
		if (tmp2 < max2)
			max2 = tmp2;
	}

	abs(max1 - min2) > abs(max2 - min1) ? ans = abs(max1 - min2) : ans = abs(max2 - min1);
	cout << ans;
	system("pause");
	return 0;
}