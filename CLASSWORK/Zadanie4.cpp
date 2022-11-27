#include <iostream>
#include <string>

using namespace std;

int Identical_numbers(int arr[], int n1)
{
	string s;
	int ans = 1, t = 1, p;
	for (int i = 1; i < n1; i++)
	{
		if (arr[i] == arr[i - 1])
		{
			++t;
			if (ans < t)
			{
				p = arr[i];
			}
		}
		else
		{
			ans = max(ans, t);
			t = 1;

		}

	}
	ans = max(ans, t);

	for (int i = 0; i < ans; i++)
	{
		s += to_string(p);
	}
	int n2 = stoi(s);

	return n2;
}


int main()
{
	setlocale(LC_ALL, "RU");

	int n;
	cout << "ƒлина массива: " << endl;
	cin >> n;

	int* a = new int[n];

	cout << "Ёлементы массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}


	cout << Identical_numbers(a, n) << endl;


}