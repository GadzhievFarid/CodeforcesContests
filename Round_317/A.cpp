#include <iostream>

using namespace std;

int main()
{
	int na, nb, k, m;
	cin >> na >> nb >> k >> m;
	int* A = new int[na];
	int* B = new int[nb];
	for (int i = 0; i < na; ++i)
		cin >> A[i];
	for (int i = 0; i < nb; ++i)
		cin >> B[i];
	if (A[k - 1] < B[nb - m])
		cout << "YES";
	else
		cout << "NO";
	return 0;
}