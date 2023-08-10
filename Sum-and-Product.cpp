#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

ll my_sqrt(long long x)
{
    ll l = 0;
    ll r = 2e9+1 ;

    ll mid = 0;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if ((mid * mid) == x)
        {
            return mid;
        }
        else if ((mid * mid) < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}
void solve()
{
    int n, q;
    cin >> n;

    vll a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> q;

    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        m[a[i]]++;
    }
    for (int i = 0; i < q; i++)
    {
        ll b, c;
        cin >> b >> c;
        ll D = (ll)(b * b) - (ll)(4 * c);

        if (D < 0)
        {
            cout << 0 << " ";
        }
        else if (D == 0)
        {
            if (b & 1 == 1)
            {
                cout << 0 << " ";
            }
            else
            {
                // cout << m[(-b/2)] << " ";
                ll ans = m[(b >> 1)];
                ans = (ans * (ans - 1)) >> 1;
                cout << ans << " ";
            }
        }
        else
        {
            ll r = my_sqrt(D);
            if (r != -1)
            {
                ll x1 = (b + r) >> 1;
                ll y1 = (b - r) >> 1;
                ll ans = m[x1] * m[y1];
                cout << ans << " ";
            }

            else
            {
                cout << 0 << " ";
            }
        }
    }
    cout << endl;
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