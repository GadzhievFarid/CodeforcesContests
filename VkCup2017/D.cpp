#include <iostream>

using namespace std;

int bit_count(int i)
{
	i = i - ((i >> 1) & 0x55555555);
	i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
	return (((i + (i >> 4)) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

int main()
{
	int n, k, ans = 0;
	cin >> n >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	for (int i = 0; i < n; ++i){
		for (int j = 0; j < i; ++j){
			if (bit_count(abs(arr[i] ^= arr[j])) == k)
				ans++;
		}
	}
	cout << ans;
	system("pause");
	return 0;
}