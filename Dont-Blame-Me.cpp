#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
int BitsSetTable256[256];
int countSetBits(int n)
{
    return (BitsSetTable256[n & 0xff] +
            BitsSetTable256[(n >> 8) & 0xff] +
            BitsSetTable256[(n >> 16) & 0xff] +
            BitsSetTable256[n >> 24]);
}
// Function to initialise the lookup table
void initialize()
{

    // To initially generate the
    // table algorithmically
    BitsSetTable256[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        BitsSetTable256[i] = (i & 1) +
                             BitsSetTable256[i / 2];
    }
}

const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    vector<vi> dp(n + 1, vi(64, 0));
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];

        for (int j = 0; j < 64; j++)
        {
            dp[i][j] += dp[i - 1][j];
            if (dp[i][j] >= mod)
            {
                dp[i][j] -= mod;
            }
            dp[i][j & a[i]] += dp[i - 1][j];
            if (dp[i][j & a[i]] >= mod)
            {
                dp[i][j & a[i]] -= mod;
            }
        }
        dp[i][a[i]] = (dp[i][a[i]] + 1) % mod;
    }
    int ans = 0;
    for (int i = 0; i < 64; i++)
    {
        if (countSetBits(i) == k)
        {
            ans += dp[n][i];
            if (ans >= mod)
            {
                ans -= mod;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    initialize();
    cin >> t;
    while (t--)
    {
        solve();
    }
}