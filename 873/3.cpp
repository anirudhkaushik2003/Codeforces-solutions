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
    ll n;
    cin >> n;
    vll a(n);
    for(auto &x : a)
        cin >> x;
    vll b(n);
    for(auto &x : b)
        cin >> x;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll result = 1;
    ll module = 1e9+7;
    ll inc = 0;
    for(int i = n-1;i>=0;i--)
    {
        ll ind = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        if(ind  == n)
        {
            result = 0;
            break;
        }
        ind = n - ind;
        result *= (ind - inc);
        result %= module;
        inc++;

    }
    cout << result << endl;
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