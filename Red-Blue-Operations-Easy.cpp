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
    int n, q;
    cin >> n >> q;
    vll a(n);
    map<ll, ll> hashmap;
    for (auto &x : a)
    {
        cin >> x;
        hashmap[x] = 0;
    }
    vll k(q);
    for (auto &x : k)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        hashmap[a[i]]++;
    }
    sort(a.begin(), a.end());

    int p = 0;
    while (p < q)
    {
        ll ki = k[p];
        ll ans = ki + a[0] - hashmap[a[0]] + 1;
        if (ki > n)
        {
            ans -= 0;
        }
        cout << ans << " ";
        p++;
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}