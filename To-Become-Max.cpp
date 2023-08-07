#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

ll f(int i, ll y, vll &a, vll &dp, int n)
{

    if (y > a[i] && i < n - 1)
    {
        dp[i] = y - a[i] + f(i + 1, y - 1, a, dp, n);
        return dp[i];
    }
    else if (y <= a[i])
    {
        dp[i] = 0;
        return 0;
    }
    else if (i == n - 1 && y > a[i])
    {
        dp[i] = INT_MAX;
        return INT_MAX;
    }
    return -1;
}
void solve()
{
    int n, k;
    cin >> n >> k;

    vll a(n);
    for (auto &x : a)
    {
        cin >> x;
    }
    // int ind_max = max_element(a.begin(),a.end()) - a.begin();
    // int max_val = a[ind_max];
    ll l = *max_element(a.begin(), a.end());
    ll r = l + n + 1;
    ll mid = 0;
    ll ans = l;
    while (l <= r)
    {
        vll dp(n);
        mid = (l + r) >> 1;
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {

            f(i, mid, a, dp, n);
            if (dp[i] <= k)
            {

                flag = true;
            }
        }
        if (flag)
        {
            ans = max(mid, ans);
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;

    // f(i, y) = 0 if y <=  bi
    // f(i, y) = y - bi + f(i+1, y-1) if y > bi
    // f(i, y) = inf if i > n-1
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