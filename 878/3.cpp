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
    ll n, k, q;
    cin >> n >> k >> q;
    vll a(n);
    vll indices;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > q)
        {
            indices.pb(i);
        }
    }
    indices.pb(n);
    ll ans = 0;
    if (indices.size() == 0)
    {
        cout << (n - k + 1)*(n-k+2)/2 << "\n";
        return;
    }
    vll values(indices.size());
    values[0] = indices[0];
    for (int i = 1; i < indices.size(); i++)
    {
        values[i] = indices[i] - indices[i - 1] - 1;
    }
    for (auto it : values)
    {
        if (it >= k)
            ans += (((it - k + 1)*(it - k + 2))/2);
    }
    cout << ans << "\n";
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