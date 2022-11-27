#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int n;
	cin >> n;

	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = i;
		s += to_string(a[i]);
	}
	cout << s << endl;
	cout << s[n - 1] << endl;
}