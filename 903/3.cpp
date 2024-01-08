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
    vector<string> grid(n);
    int ans = 0;
    for(auto &x: grid) cin >> x;

    for(int i = 0; i*2< n; i++)
    {
        for(int j = 0; j*2 < n; j++)
        {
            if(grid[i][j] != grid[n-1-j][i])
            {   
                int temp = abs(grid[n-1-j][i] - grid[i][j]);
                
                ans += temp;
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