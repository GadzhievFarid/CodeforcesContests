#include <iostream>

using namespace std;
int main()
{
	int n, k, count = 0;
	cin >> n >> k;
	for (int i = 0; i < n; ++i){
		cout << char(97 + count);
		count++;
		if (count == k)
			count = 0;
	}
	return 0;
}