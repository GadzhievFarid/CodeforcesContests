#include <iostream>

using namespace std;

int main()
{
	int f;
	cin >> f;
	char time[5];
	for (int i = 0; i < 5; ++i)
	{
		cin >> time[i];
	}
	if ((time[3] - 48) * 10 + time[4] - 48 > 59)
		time[3] = '1';
	if (f == 12)
	{
		if ((time[0] - 48) * 10 + time[1] - 48 > 12 && time[1] != '0')
			time[0] = '0';
		else if ((time[0] - 48) * 10 + time[1] - 48 > 12 && time[1] == '0' || (time[0] - 48) * 10 + time[1] - 48 == 0)
			time[0] = '1';
		
	}
	else
	{
		if ((time[0] - 48) * 10 + time[1] - 48 > 23 && time[1] != '0')
			time[0] = '0';
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << time[i];
	}
	system("pause");
	return 0;
}