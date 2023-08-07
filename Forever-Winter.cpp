#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

int dfs(int node, vector<vi> &G, vi &vis)
{
    vis[node] = 1;

    // get depth for node
    int depth = 0;
    for (auto it : G[node])
    {
        if (!vis[it])
        {
            depth = max(depth, dfs(it, G, vis));
        }
    }
    return depth + 1;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a(m);
    vector<vi> G(n, vi());
    map<int, int> hashmap;
    vi d(n, 0);

    for (int i = 0; i < m; i++)
    {
        cin >> a[i].first >> a[i].second;
        a[i].first--;
        a[i].second--;

        // cout << a[i].first << " " << a[i].second << endl;
        G[a[i].first].pb(a[i].second);
        G[a[i].second].pb(a[i].first);
        d[a[i].first]++;
        d[a[i].second]++;
    }
    for (int i = 0; i < n; i++)
    {
        hashmap[d[i]]++;
    }
    set<int> c;
    for(int i = 0 ; i < n; i++)
    {
        c.insert(d[i]);
    }

    
    if (c.size() < 3)
    {
        for (int i = 0; i < n; i++)
        {
            vi vis(n, 0);
            int depth = dfs(i, G, vis);
            if (depth == 3)
            {
                int x = d[i];
                int y = d[G[i][0]];
                if(y==x)
                {y--;}
                cout << x << " " << y << endl;
                return;
            }
        }
    }
    else
    {
        int x, y;
        for (auto it : hashmap)
        {
            if (it.second == 1)
            {
                x = it.first;
            }
            else if (it.first > 1)
            {
                y = it.first - 1;
            }
        }
        cout << x << " " << y << endl;
        return;
    }

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