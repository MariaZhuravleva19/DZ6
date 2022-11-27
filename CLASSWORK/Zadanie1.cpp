#include <iostream>


using namespace std;

int main()
{
	int b = 0;
	int a;
	cin >> a;

	while (a > 0)
	{
		b = 10 * b + (a % 10);
		a = a / 10;
	}

	cout << b;
}