#include <iostream>
#include <string>

using namespace std;

int main()
{
	string in;
	cin >> in;
	cout << (in.length() + 1) * 26 - in.length();
	return 0;
}