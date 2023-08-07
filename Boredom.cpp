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

    for(auto &x : a) cin >> x;
    vll dp(1e5+1, 0);
    vll cnt(1e5+1, 0);

    for(int  i = 0 ; i < n ; i++)
    {
        cnt[a[i]]++;
    }

    dp[1] = cnt[1];
    for(int  i = 2 ; i < 1e5+1;i++)
    {
        dp[i] = max(dp[i-1], dp[i-2] + cnt[i]*i);
    }
    cout << dp[1e5] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    while (t--)
    {
        solve();
    }
}