#include <iostream>
#include <set>

using namespace std;
struct Compare{
	bool operator ()(const pair<int, int> &A, const pair<int, int>& B)
	{
		return A.first > B.first;
	}
};
struct Compare1{
	bool operator ()(const pair<int, int> &A, const pair<int, int>& B)
	{
		return A.first < B.first;
	}
};

int main()
{
	long long int n; cin >> n;
	long long int ans = 0;
	set<pair<long long int, long long int>, Compare1> plus;
	set<pair<long long int, long long int>, Compare> minus;
	while (n)
	{
		long long int temp, temp2;
		cin >> temp;
		cin >> temp2;
		if (temp > 0)
		{
			pair<long long int, long long int> A(temp, temp2);
			plus.insert(A);
		}
		else
		{
			pair<long long int, long long int> A(temp, temp2);
			minus.insert(A);
		}
		n--;
	}
	if (plus.size() >= minus.size())
	{
		while (minus.size())
		{
			ans += plus.begin()->second;
			plus.erase(plus.begin());
			ans += minus.begin()->second;
			minus.erase(minus.begin());
		}
		if (plus.size())
			ans += plus.begin()->second;
	}
	else
	{
		while (plus.size())
		{
			ans += plus.begin()->second;
			plus.erase(plus.begin());
			ans += minus.begin()->second;
			minus.erase(minus.begin());
		}
		if (minus.size())
			ans += minus.begin()->second;
	}
	cout << ans;
	return 0;
}