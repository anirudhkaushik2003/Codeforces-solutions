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
    vector <pair <int,int>> v1;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        if(k >= x && k <= y )
        {
            v1.pb(mp(x, y));
        }
    }

    int count = 0;
    int max_L = 0;
    int min_R = 1000;
    for (int i = 0 ; i< v1.size(); i++)
    {
        int x,y;
        x = v1[i].first;
        y = v1[i].second;

        if (x > max_L)
        {
            max_L = x;
        }
        if (y < min_R)
        {
            min_R = y;
        }

    }

    if(min_R == max_L)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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