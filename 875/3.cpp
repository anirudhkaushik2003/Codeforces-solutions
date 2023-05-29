#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}
void solve()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll>> E(n - 1);
    ll a, b;
    for (auto &x : E)
    {

        cin >> a >> b;
        if (a > b)
        {
            x = mp(b, a);
        }
        else
        {
            x = mp(a, b);
        }
    }
    vll seen_vertices(n + 1, -1);
    seen_vertices[1] = 1;
    ll ans = 1;

    
    for (int i = 0; i < n - 1; i++)
    {
        if (seen_vertices[E[i].first] == 1 || seen_vertices[E[i].second] == 1)
        {
        }
        else
        {
            // cout << E[i].first << seen_vertices[E[i].first] << " " << E[i].second << seen_vertices[E[i].second] << endl;
            ans++;
        }
        seen_vertices[E[i].first] = 1;
        seen_vertices[E[i].second] = 1;
    }
    cout << ans << endl;

    // seen_vertices[1] = 1;
    // vector<vector<int>> E2(n-1);
    // for(int i = 0; i< n-1;i++)
    // {
    //     E2[i] = {E[i].first, E[i].second, i+1};
    // }

    // sort(E2.begin(), E2.end(), sortcol);
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