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
    string s;
    cin >> s;
    vi dp(n, 0);

    string rs = s;
    reverse(rs.begin(), rs.end());

    if (n % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }
    bool is_rbs = true, is_rbs_r = true;
    dp[0] = (s[0] == '(') ? 1 : -1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '(')
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = dp[i - 1] - 1;
        }
    }
    if (dp[n - 1] != 0)
    {
        cout << -1 << endl;
        return;
    }

    int cond = 1, cond_r = 1;
    vi ind;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] < 0)
        {
            cond = 0;
        }
        else if (dp[i] > 0)
        {
            cond_r = 0;
        }
        else if (dp[i] == 0)
        {
            ind.pb(i);
        }
        // cout << dp[i] << " ";
    }
    if (cond || cond_r)
    {
        cout << 1 << endl;
        while (n--)
        {
            cout << 1 << " ";
        }
    }
    else
    {
        cout << 2 << endl;
        int i = 0, j = 0;
        int color = 1;
        while (j < ind.size())
        {
            if (dp[i] < 0)
                color = 1;
            else
                color = 2;
            for (; i < ind[j]+1; i++)
            {
                cout << color << " ";
            }
            j++;
        }
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