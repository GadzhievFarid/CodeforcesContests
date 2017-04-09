#include <iostream>

using namespace std;

int mod = 1000000007;

long long int Pasc[5001][5001];

int main()
{
	int k, sum = 0;
	long long int  ans = 1;
	cin >> k;
	int* colours = new int[k];
	for (int i = 0; i < k; ++i)
		cin >> colours[i];
	Pasc[0][0] = 1;
	for (int i = 1; i < 5001; ++i)
	{
		Pasc[i][0] = 1;
		for (int j = 1; j <= i; ++j)
			Pasc[i][j] = (Pasc[i - 1][j - 1] + Pasc[i - 1][j])%mod;
	}
	for (int i = 0; i < k; ++i)
	{
		sum += colours[i];
		ans *= (Pasc[sum - 1][colours[i] - 1])%mod;
		ans %= mod;
	}
	cout << ans%mod ;
	return 0;
}