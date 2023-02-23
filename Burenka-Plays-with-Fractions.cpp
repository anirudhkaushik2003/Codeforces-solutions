#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a * d == b * c)
    {
        cout << 0 << endl;
        return;
    }
    if (a == 0)
    {
        cout << 1 << endl;
        return;
    }
    if ((b * c)%(a * d)  == 0)
    {
        cout << 1 << endl;
        return;
    }
    if (c == 0)
    {
        cout << 1 << endl;
        return;
    }
    if ((a * d) % (b * c) == 0)
    {
        cout << 1 << endl;
        return;
    }

    cout << 2 << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}