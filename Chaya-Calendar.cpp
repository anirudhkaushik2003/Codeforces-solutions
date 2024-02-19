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
    vi a(n);
    for(auto &x : a)
    {
        cin >> x;
    }

    ll start = a[0]+1;
    for(int i = 1; i < n; i++)
    {
        start = (ll)((start+a[i]-1)/a[i])*(ll)a[i];
        start += 1;
    }
    start -= 1;
    cout << start << endl;
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