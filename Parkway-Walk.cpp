#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> sum(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            sum[i] = a[i];
        }
        else
        {
            sum[i] = sum[i - 1] + a[i];
        }
    }
    if (sum[n - 1] <= m)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        ll l = 0, r = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (sum[i] > m)
            {
                cout << sum[n - 1] - m << endl;
                return;
            }
        }
    }
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