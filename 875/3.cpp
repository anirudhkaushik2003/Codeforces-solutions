#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

const int NMAX = 2e5 + 5;
int dp[NMAX], id[NMAX];

vector<pair<int, int>> edge[NMAX];
void dfs(int u)
{
    for (auto v : edge[u])
    {
        if (dp[v.first] == 0)
        {
            dp[v.first] = dp[u] + (v.second <= id[u]);
            id[v.first] = v.second;
            dfs(v.first);
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        edge[i].clear();
        dp[i] = 0;
        id[i] = 0;
    }

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        edge[u].pb(mp(v, i));
        edge[v].pb(mp(u, i));
    }

    id[1] = 1;
    dp[1] = 1;
    dfs(1);
    cout << *max_element(dp+1, dp+n+1) << endl;
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