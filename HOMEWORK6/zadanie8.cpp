#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int k, n, m, d, ans;
    ifstream file1;
    file1.open("zadanie8(input).txt");

    file1 >> k >> n >> m >> d;



    ofstream file2;
    file2.open("zadanie8(output).txt");

    ans = ((k * n * m * d) / (k * n * m - k * n - k * m - n * m));;
    if (ans > 0)
    {
        file2 << ans;
    }
    else
    {
        file2 << -1;
    }

    file1.close();
    file2.close();
}