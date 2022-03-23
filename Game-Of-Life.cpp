#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    long long int m;
    cin >> n >> m;
    char a[n + 1];

    int b[n];
    int c[n];
    int j = 0;
    int cond = -1;
    for (int i = 0; i < n; i++)
    {
        b[i] = -1;
    }
    cin >> a;
    int k = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] == '1')
        {
            b[j] = i;
            j++;
        }
        if (i > 0 && i < n - 1)
        {
            if (a[i - 1] == '1' && a[i + 1] == '1' && a[i] == '0')
            {

                c[k] = i;
                a[i] = '-';
                k++;
            }
        }
    }
    for (int l = 0; l < j - 1; l++)
    {
        if (abs(b[l] - b[l + 1] - 1) % 2 != 0)
        {
            int temp = (b[l] + b[l+1])/2;
            a[temp] = '-';
            c[k] = temp;
            k++;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (b[i] != -1)
        {
            for (j = b[i]; j < n && j <= (m + b[i]); j++)
            {
                if (a[j] != '-')
                    a[j] = '1';
            }
            for (j = b[i]; j >= 0 && j >= (b[i] - m); j--)
            {
                if (a[j] != '-')
                    a[j] = '1';
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        a[c[i]] = '0';
    }

    cout << a << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
}