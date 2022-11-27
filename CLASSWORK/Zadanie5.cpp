#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int c1 = 0, c2 = 0;

	for (int i = 0; i < s.length(); i++)
	{

		if (s[i] == '"' && s[i + 1] == '(' && s[i + 2] == '"')
		{
			c1 += 1;
		}


		if (s[i] == '"' && s[i + 1] == ')' && s[i + 2] == '"')
		{
			c2 += 1;
		}

	}

	if (c1 == c2)
	{
		cout << "TRUE" << endl;
	}
	else
	{
		cout << "FALSE" << endl;
	}
}