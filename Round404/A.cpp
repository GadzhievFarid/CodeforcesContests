#include <iostream>
#include <string>

using namespace std;

int main()
{
	long long int n, sum = 0;
	cin >> n;
	string tmp;
	for (long long int i = 0; i < n; ++i){
		cin >> tmp;
		if (tmp == "Tetrahedron")
			sum += 4;
		else if (tmp == "Cube")
			sum += 6;
		else if (tmp == "Octahedron")
			sum += 8;
		else if (tmp == "Dodecahedron")
			sum += 12;
		else if (tmp == "Icosahedron")
			sum += 20;
	}
	cout << sum;
	return 0;
}