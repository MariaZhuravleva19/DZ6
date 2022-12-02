#include <iostream>
#include <fstream>
#include <vector>

using namespace std;



int main()
{
    int n, k;
    ifstream file1;
    file1.open("zadanie4(input).txt");

    file1 >> n >> k;


    vector<vector<int> > a1;
    vector<int> a2;

    for (int i = 0; i < k; ++i)
    {
        a2.push_back(1);
    }
    a1.push_back(a2);


    for (int i = 1; i < n; ++i)
    {
        a2.clear();
        for (int j = 0; j < k; ++j)
        {
            a2.push_back((a1[i - 1][j] + j) % (i + 1) + 1);
        }
        a1.push_back(a2);
    }
    ofstream file2;
    file2.open("zadanie4(output).txt");
    file2 << a1[n - 1][k - 1];

    file1.close();
    file2.close();

}