#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream file1;

	int n, k, ans = 0;
	file1.open("zadanie5(input).txt");

	file1 >> n;
	file1 >> k;

	ans = 1 + (n - 1) * k;

	for (int i = 0; i < k; i++)
	{
		ans += i * (n - 2);
	}
	ofstream file2;
	file2.open("zadanie5(output).txt");
	file2 << ans;

	file1.close();
	file2.close();

}