#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

ll getPrice(int c1, int c2, int k, vector<pll> &v)
{
    if (c1 < k && c2 < k)
    {
        return 0;
    }
    else
    {
        return abs(v[c1].first - v[c2].first) + abs(v[c1].second - v[c2].second);
    }
}

void solve()
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    a--, b--;

    vector<pll> v(n);
    vector<pll> free(k);
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[i].first = x;
        v[i].second = y;
        if (i < k)
        {
            free[i].first = x;
            free[i].second = y;
        }
    }
    ll cost = 0;
    if (a < k && b < k)
    {
        cout << 0 << endl;
        return;
    }
    cost = abs(v[a].first - v[b].first) + abs(v[a].second - v[b].second);
    if (a >= k && b >= k)
    {
        sort(free.begin(), free.end());
        ll cost1 = 1e10;
        for (int i = 0; i < k; i++)
        {
            ll temp = abs(v[a].first - free[i].first) + abs(v[a].second - free[i].second);
            cost1 = min(cost1, temp);
        }
        ll cost2 = 1e10;

        for (int i = 0; i < k; i++)
        {
            ll temp = abs(v[b].first - free[i].first) + abs(v[b].second - free[i].second);
            cost2 = min(cost2, temp);
        }
        cost2 += cost1;
        cost = min(cost, cost2);
        cout << cost << endl;
    }
    else
    {
        if (a < k && b >= k)
        {
            ll cost2 = 1e10;

            for (int i = 0; i < k; i++)
            {
                ll temp = abs(v[b].first - free[i].first) + abs(v[b].second - free[i].second);
                cost2 = min(cost2, temp);
            }
            cost = min(cost, cost2);
            cout << cost << endl;
            return;
        }
        else if (a >= k && b < k)
        {
            ll cost2 = 1e10;

            for (int i = 0; i < k; i++)
            {
                ll temp = abs(v[a].first - free[i].first) + abs(v[a].second - free[i].second);
                cost2 = min(cost2, temp);
            }
            cost = min(cost, cost2);
            cout << cost << endl;
            return;
        }
    }
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