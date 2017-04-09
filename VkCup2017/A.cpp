#include <iostream>

using namespace std;

int main()
{
	int n, temp, sum;
	cin >> n;
	sum = 0;
	for (int i = 0; i < n; ++i){
		cin >> temp;
		sum += temp;
	}
	cout << sum / n;
	return 0;
}