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
    ll x, k;
    cin >> x >> k;

    if(x%k == 0)
    {
        cout << 2 << endl;
        cout << x-k-1 << " " << k+1 << endl;
    }
    else
    {
        cout << 1 << endl;
        cout << x << endl;
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