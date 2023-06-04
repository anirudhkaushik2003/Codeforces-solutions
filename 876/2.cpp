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
    int n;
    cin >> n;
    vector<pll> ab(n);
    map<ll, ll> hashmap;
    vll b;
    for (int i = 0; i < n; i++)
    {
        cin >> ab[i].first >> ab[i].second;
        hashmap[ab[i].first] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        hashmap[ab[i].first]++;
    }
    sort(ab.begin(), ab.end());
    for (int i = 0; i < n; i++)
    {
        for (int j = min(ab[i].first, hashmap[ab[i].first]); j > 0; j--)
        {

            b.pb(ab[i + hashmap[ab[i].first] - j].second);
        }
        i += hashmap[ab[i].first] - 1;
    }
    sort(b.begin(), b.end());
    ll ans = 0;
    int i = 0;
    int x = b.size();
    while (i<x)
    {
        ans += b[i];
        i++;
    }
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