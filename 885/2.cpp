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
    int n, k;
    cin >> n >> k;

    vector<vi> color(k + 1, vi());         // color, min possible step size
    vector<int> color_location(k + 1, -1); // color, last_location

    vi v(n);

    for (auto &x : v)
    {
        cin >> x;
    }
    for (int i = 0; i < n; i++)
    {
        if (color_location[v[i]] == -1)
        {
            color_location[v[i]] = i;
            color[v[i]].pb(i);
        }
        else
        {
            color[v[i]].pb(i - color_location[v[i]] - 1);
            color_location[v[i]] = i;

            sort(color[v[i]].begin(), color[v[i]].end(),  greater<int>());
            if (color[v[i]].size() > 2)
            {
                color[v[i]].pop_back();
            }
        }
    }
    for (int i = 1; i < k + 1; i++)
    {
        if (color_location[i] != -1)
        {
            color[i].pb(n - color_location[i] - 1);
            sort(color[i].begin(), color[i].end(), greater<int>());
            if (color[i].size() > 2)
            {
                color[i].pop_back();
            }
        }
    }
    // for(auto x: color){
    //     for(auto y: x){
    //         cout << y << " ";
    //     }
    //     cout << endl;
    // }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (color[v[i]].size() > 1)
        {
            ans = min(ans, max(color[v[i]][0] / 2, color[v[i]][1]));
            // cout << max(color[v[i]][0] / 2, color[v[i]][1]) << endl;
        }
        else if (color[v[i]].size() > 0)
        {
            ans = min(ans, color[v[i]][0]);
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