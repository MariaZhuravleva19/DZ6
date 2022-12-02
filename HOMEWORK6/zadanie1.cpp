#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    int n, k, summ = 0;
    double c = 0;


    ifstream file1;
    file1.open("zadanie1(input).txt");

    file1 >> n;


    vector<int>ans(n);
    ans.clear();

    for (int i = 0; i < n; i++)
    {
        file1 >> k;
        ans.push_back(k);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (ans[i] == 10 && c <= 9)
        {
            summ = summ + ans[i] + ans[i + 1] + ans[i + 2];
            c++;
        }
        else
        {
            if (ans[i] + ans[i + 1] == 10 && c <= 9)
            {
                summ = summ + ans[i] + ans[i + 1] + ans[i + 2];
                i++;
                c++;
            }
            else
            {
                if (c <= 9)
                {
                    summ = summ + ans[i] + ans[i + 1];
                    c++;
                    i++;
                }
            }
        }

    }

    summ += ans[n - 1];

    if (ans[n - 1] == 10)
    {
        c++;
    }
    else
    {
        c = c + 0.5;
    }


    if (c == 11)
    {
        summ = summ - ans[n - 1];
    }
    if (c == 10.5)
    {
        summ = summ - ans[n - 1];
    }

    ofstream file2;
    file2.open("zadanie1(output).txt");
    file2 << summ;

    file1.close();
    file2.close();

}