#include <iostream>

using namespace std;

int count(int x){
	int ans = 0;
	while (x != 0){
		ans += (x % 10);
		x /= 10;
	}
	return ans;
}

int solve(int x){
	int ans = x;
	int i = 10;
	while (x > 0){
		x = x - x % i - 1;
		if (count(x) > count(ans))
			ans = x;
		i *= 10;
	}
	return ans;
}

int main()
{
	int x;
	cin >> x;
	cout << solve(x);
	system("pause");
	return 0;
}