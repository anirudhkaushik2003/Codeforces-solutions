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
    vll a(n);
    vll b(n);

    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;

    long long suma = 0, sumb = 0;

    ll mina = INT_MAX;
    ll minb = INT_MAX;
    for(int i = 0; i<n;i++)
    {
        suma += a[i];
        sumb += b[i];

        mina = min(mina, a[i]);
        minb = min(minb, b[i]);
    }
    mina = mina*n + sumb;
    minb = minb*n + suma;
    cout << min(mina, minb) << endl;
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