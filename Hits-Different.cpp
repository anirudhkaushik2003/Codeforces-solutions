#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

ll m = 2023 * 1012;
vll dp(m+1,0);
void solve()
{
    ll n;
    cin >> n;

    cout << dp[n] << endl;

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    dp[0] = 0;
    dp[1] = 1;
    for (int row = 2; row <= 2023; row++)
    {
        for (int col = 1; col < row + 1; col++)
        {
            ll cur = (row * (row - 1)) / 2 + col;
            ll p3 = 0;
            if(col == 1 )
            {
                ll p1 = (((row-1)*(row-2))/2) + col;
                dp[cur] = dp[p1];
            }
            else if (col == row)
            {
                ll p1 = (((row-1)*(row-2))/2) + col - 1;
                dp[cur] = dp[p1];
            }
            else{
                ll p1 = (((row-1)*(row-2))/2) + col-1;
                ll p2 = (((row-1)*(row-2))/2) + col;

                // common parent of p1 and p2
                if(row > 2)
                {
                    p3 = (max(p1, p2) - row +1);
                }

                dp[cur] = dp[p1] + dp[p2] - dp[p3];
                // cout << "p3: " << p3 << " ";
            }
            dp[cur] += (cur*cur);
            // cout << cur << ": " << dp[cur] << " " << "p3: " << p3 << " ";
            

        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}