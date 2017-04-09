#include <iostream>

using namespace std;

void bubble(pair<int, int>* arr, int n){
	for (int i = 1; i < n - 1; ++i){
		for (int j = 1; j < n - 1; ++j){
			if (arr[j].first < arr[j + 1].first)
				swap(arr[j], arr[j + 1]);
		}
	}
}


int main()
{
	int n, sum;
	cin >> n;
	sum = 0;
	pair<int, int>* arr = new pair<int, int>[n];
	int temp;
	for (int i = 0; i < n; ++i){
		cin >> temp;
		arr[i] = make_pair(temp, i);
		sum += temp;
	}
	if (sum < n - 1 || arr[0].first == 0)
		cout << -1;
	else {
		cout << n - 1;
		bubble(arr, n);
		int st = 0, fn = 1, count = 0, count2 = 0;
		while (fn < n && count2 != n - 1){
			fn += count;
			count = 0;
			for (auto i = arr[st].second; i < arr[st].second + arr[st].first; ++i){
				if (fn >= n || st >= n || count2 >= n - 1)
					return 0;
				cout << arr[st].second  + 1 << " " << arr[fn + i - arr[st].second].second + 1 << endl;
				count++;
				count2++;
			}
			st++;
		}
	}

	delete[] arr;
	system("pause");
	return 0;
}