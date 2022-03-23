#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    int len;
    int n;
    int cond = 0;
    while (t--)
    {
        cond = 0;
        cin >> n;
        cin >> s;
        char a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    a[i][j] = 'X';
                }
                else
                    a[i][j] = '.';
            }
        }
        for (int i = 0; i < n; i++)
        {

            if (s[i] == '1')
            {
                for (int j = 0; j < n; j++)
                {
                    if (i != j)
                    {
                        a[i][j] = '=';
                        a[j][i] = '=';
                    }
                }
            }
            else
            {
                for (int k = 0; k < n; k++)
                {
                    if (s[k] == '2' && k != i)
                    {
                        if (a[k][i] == '.')
                        {
                            a[k][i] = '-';
                            a[i][k] = '+';
                        }
                    }
                }
            }
        }
        if (cond == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
    }
}