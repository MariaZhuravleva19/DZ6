#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    int n;

    ifstream file1;
    file1.open("zadanie2(input).txt");
    file1 >> n;

    vector<int> a{ 2,3,4,7 };
    vector<int> b{ 1,5,6,8 };

    int i = 4;
    while (a.size() <= n || b.size() <= n)
    {
        a.push_back(b[i - 1] + b[i - 3]);
        ++i;

        if (b[b.size() - 1] + 1 < a[a.size() - 1])
            for (int j = b[b.size() - 1] + 1; j < a[a.size() - 1]; ++j)
                if (j != a[a.size() - 2])
                    b.push_back(j);
    }

    ofstream file2;
    file2.open("zadanie2(output).txt");

    file2 << a[n - 1];
    file2 << endl;
    file2 << b[n - 1];

    file1.close();
    file2.close();
}