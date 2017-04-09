#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long int n, m;
	cin >> n >> m;
	if (n < m)
		cout << n;
	else 
		cout << (long long) (ceil((sqrt((long float)(8 * (n - m) + 1)) - 1) / 2) + m);
	return 0;
}