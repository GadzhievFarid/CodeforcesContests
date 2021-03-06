﻿
/*Все города Лайнландии расположены на координатной прямой Ox.Таким образом, каждый город характеризуется своим положением xi — координатой на оси Ox.
Никакие два города не расположены в одной точке. Жители Лайнландии очень любят слать друг другу письма. 
Житель страны может отослать письмо другому жителю только в том случае, если адресат живёт в другом городе
(так как если они живут в одном городе, то им проще ходить в гости). 
Удивительно, но факт : стоимость отправки письма в точности равна расстоянию между городом отправителя и городом получателя.
Для каждого города найдите два значения mini и maxi, где mini — минимальная стоимость отправки письма из i - го города в какой - либо другой город, 
а maxi — максимальная стоимость отправки письма из i - го города в какой - либо другой город.

Входные данные
В первой строке входных данных содержится целое число n(2 ≤ n ≤ 105) — количество городов в Лайнландии.
Во второй строке содержится последовательность из n различных целых чисел x1, x2, ..., xn(-109 ≤ xi ≤ 109), где xi — x - координата i - го города.
Все xi различны и идут в порядке возрастания.

Выходные данные
Выведите n строк, i - я строка должна содержать два целых числа mini, maxi, разделённых пробелом,
где mini — минимальная стоимость отправки письма из i - го города, а maxi — максимальная стоимость отправки письма из i - го города.*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	cout << arr[1] - arr[0] << " " << arr[n - 1] - arr[0] << endl;
	for (int i = 1; i < n - 1; ++i)
	{
		if (abs(arr[i] - arr[i - 1]) < abs(arr[i] - arr[i + 1]))
			cout << abs(arr[i] - arr[i - 1]);
		else
			cout << abs(arr[i] - arr[i + 1]);
		cout << " ";
		if (abs(arr[i] - arr[0]) > abs(arr[i] - arr[n - 1]))
			cout << abs(arr[i] - arr[0]);
		else
			cout << abs(arr[i] - arr[n - 1]);
		cout << endl;
	}
	cout << arr[n - 1] - arr[n - 2] << " " << arr[n - 1] - arr[0] << endl;
	delete[]arr;
	return 0;
}