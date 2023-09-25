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
    vector<pii> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    pii poly = v[0];

    sort(v.begin(), v.end());
    int index = find(v.begin(), v.end(), poly) - v.begin();
    for(int i = index+1; i<n;i++)
    {
        if(v[i].second >= poly.second)
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << poly.first << endl;
    return;
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