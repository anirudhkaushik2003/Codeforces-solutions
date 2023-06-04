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
    vll b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<vi> dp(n, vi(3, 0));
    dp[2][0] = min(b[0], min(b[1], b[2]));
    dp[2][2] = max(b[0], max(b[1], b[2]));
    dp[2][1] = b[0] + b[1] + b[2] - dp[2][0] - dp[2][2];

    ll ans = b[dp[2][0]] + b[dp[2][1]] + b[dp[2][2]] - *max_element(dp[2].begin(), dp[2].end()) + *min_element(dp[2].begin(), dp[2].end());
    for (int i = 3; i < n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            ll sum = b[dp[j][0]] + b[dp[j][1]] + b[dp[j][2]];
            int l = *min_element(dp[j].begin(), dp[j].end());
            int r = *max_element(dp[j].begin(), dp[j].end());

            ll temp = b[i] + sum;

            for (int k = 0; k < 3; k++)
            {
                dp[i][k] = dp[j][k];
                int window_size = max(max(dp[j][(k+2)%3], dp[j][(k+1)%3]), i) - min(min(dp[j][(k+2)%3], dp[j][(k+1)%3]), i);
                if (b[i] > b[dp[j][k]])
                {

                    temp -= window_size;
                    if (temp - b[dp[j][k]] >= ans)
                    {
                        dp[i][k] = b[i];
                        ans = temp - dp[j][k];
                    }
                }
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
    cin >> t;
    while (t--)
    {
        solve();
    }
}