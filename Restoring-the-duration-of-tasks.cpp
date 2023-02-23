#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    ll s[n], f[n], d[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
    }
    d[0] = f[0] - s[0];
    cout << d[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] < f[i - 1])
        {
            d[i] = f[i] - f[i - 1];
        }
        else
        {
            d[i] = f[i] - s[i];
        }
        cout << " " << d[i];
    }
    cout << endl;
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