#include <iostream>
#include <string>

using namespace std;

bool check(string first, string second, int n)
{
	if (first == second)
		return 1;
	if (n == 1 && first != second)
		return 0;
	string fir1 = first.substr(0, n / 2);
	string fir2 = first.substr(n / 2, n);
	string sec1 = second.substr(0, n / 2);
	string sec2 = second.substr(n / 2, n);
	if ((check(fir1, sec1, fir1.length()) && check(fir2, sec2, fir2.length())) || (check(fir1, sec2, fir1.length()) && check(fir2, sec1, fir2.length())))
		return 1;
	else
		return 0;
}

int main()
{
	string in1, in2;
	cin >> in1 >> in2;
	int n = in1.length();
	if (in1.length() % 2 == 1 && in1 != in2)
		cout << "NO";
	else if (in1.length() % 2 == 1 && in1 == in2)
		cout << "YES";
	else if (check(in1, in2, n))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}