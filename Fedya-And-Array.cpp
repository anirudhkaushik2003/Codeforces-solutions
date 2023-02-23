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
    ll x, y;
    cin >> x >> y;

    ll n = 2*(x-y);

    vll a(n);
    ll i = 0;
    cout << n << endl;
    for(ll c = y; c <= x; c++)
    {
        cout << c<< " ";
    }
    for(ll c = x-1; c > y; c--)
    {
        cout << c << " ";
    }
    cout << endl;
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