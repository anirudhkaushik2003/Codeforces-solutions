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
    ll n, c;
    cin >> n >> c;

    vi v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    ll a = ((c + 1) * (c + 2)) / 2;
    ll even = 0;
    ll odd = 0;
    for (int i = 0; i < n; i++)
    {
        a -= (v[i] / 2) + 1;
        a -= c - v[i] + 1;
        if ((v[i] & 1) == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    ll e = (even * (even + 1)) / 2;
    e += (odd * (odd + 1)) / 2;

    ll ans = a + e;
    cout << ans << endl;
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