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

    for (auto &x : a)
    {
        cin >> x;
    }
    sort(a.begin(), a.end());
    ll sum = 0;
    for(int i = 1; i < n; i++)
    {
        sum+=(a[i]-a[i-1]);
    }
    cout << sum << endl;
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