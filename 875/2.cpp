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
    vll b(n);

    for(auto &x : a)
        cin >> x;
    for(auto &x : b)
        cin >> x;
    // sort(a.begin(), a.end());
    vll ca(2*n+1, 0);

    ll len = 1;
    for(int i = 1; i < n ; i++)
    {
        if(a[i] == a[i-1])
        {
            len++;
        }
        else{
            ca[a[i-1]] = max(ca[a[i-1]], len);
            len = 1;
        }
    }
    ca[a[n-1]] = max(ca[a[n-1]], len);

    vll cb(2*n+1, 0);
    len = 1;
    for(int i = 1; i<n;i++)
    {
        if(b[i] == b[i-1])
        {
            len++;
        }
        else{
            cb[b[i-1]] = max(cb[b[i-1]], len);
            len = 1;
        }
    }

    cb[b[n-1]] = max(cb[b[n-1]], len);
    ll ans = 0;
    for(int i=0;i<ca.size();i++)
    {
        if(ans < ca[i] + cb[i])
            ans = ca[i] + cb[i];
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