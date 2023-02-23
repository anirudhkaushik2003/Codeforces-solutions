#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll s[n], sum[n], sum2[n];
    char temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 'W')
        {
            s[i] = 0;
        }
        else
        {
            s[i] = 1;
        }

        if (i == 0)
        {
            sum[i] = s[i];
        }
        else
        {
            sum[i] = s[i] + sum[i - 1];
        }
        sum2[i] = sum[i];
    }

    for (int i = k; i < n; i++)
    {
        sum2[i] = sum[i] - sum[i - k];
        // cout << sum2[i] << endl;
    }
    int max = 0;
    for (int i = k - 1; i < n; i++)
    {
        if (max < sum2[i])
        {
            max = sum2[i];
        }
    }
    cout << k - max << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}