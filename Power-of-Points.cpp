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
    vector<pll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    vector<pll> b(n); 
    vll pref(n);
    sort(a.begin(), a.end());
    pref[0] = a[0].first;
    for (int i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + a[i].first;
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = n + a[i].first*(2*(i+1) - n) - (2*pref[i]) + (pref[n-1] );
        b[i].first = a[i].second;
        b[i].second = sum;
    }
    sort(b.begin(), b.end());
    for(auto it: b)
    {
        cout << it.second << " ";
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