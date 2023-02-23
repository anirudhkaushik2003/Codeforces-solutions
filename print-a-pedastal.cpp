#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    ll x = n / 3 - 1;
    if (n % 3 == 0)
    {
        x = n / 3;
        cout << x << " " << x + 1 << " " << x - 1 << endl;
    }
    if (n % 3 == 1)
    {
        x = n / 3;
        cout << x << " " << x + 2 << " " << x - 1 << endl;
    }
    if (n % 3 == 2)
    {
        x = n / 3;
        cout << x+1 << " " << x + 2 << " " << x - 1 << endl;
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