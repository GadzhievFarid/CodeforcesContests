#include <iostream>

using namespace std;

int main()
{
	long long int n, min1, min2, min3, max1, max2, max3;
	cin >> n >> min1 >> max1 >> min2 >> max2 >> min3 >> max3;
	long long int ans1 = min1, ans2 = min2, ans3 = min3;
	while (ans1 + ans2 + ans3 < n && ans1 < max1)
	{
		ans1++;
	}
	while (ans1 + ans2 + ans3 < n && ans2 < max2)
	{
		ans2++;
	}
	while (ans1 + ans2 + ans3 < n && ans3 < max3)
	{
		ans3++;
	}
	cout << ans1 << " " << ans2 << " " << ans3 << endl;
	return 0;
}