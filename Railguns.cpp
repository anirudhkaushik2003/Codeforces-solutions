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
    int n, m;
    cin >> m >> n;
    m++, n++;
    vector<vi> grid(m, vi(n, 1e9 + 7));
    vi prev(n, 0);
    vi cur(n, 0);

    int r;
    cin >> r;
    while (r--)
    {
        int t, d, c;
        cin >> t >> d >> c;
        t;
        if (d == 1) // horizontal shot
        {
            for (int i = 0; i < n; i++)
            {
                grid[c][i] = min(t, grid[c][i]);
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                grid[i][c] = min(t, grid[i][c]);
            }
        }
    }

    prev[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (grid[0][i] == prev[i - 1] + 1)
        {
            prev[i] = grid[0][i] + 1;
        }
        else
        {
            prev[i] = prev[i - 1] + 1;
        }
        cur[i] = prev[i];
    }
    for (int i = 1; i < m; i++)
    {
        if (grid[i][0] == prev[0] + 1)
        {
            cur[0] = grid[i][0] + 1;
        }
        else
        {
            cur[0] = prev[0] + 1;
        }
        for (int j = 1; j < n; j++)
        {
            if(cur[j-1] < prev[j])
            {

            }
            else if(prev[j] < cur[j-1])
            {

            }
            else{
                
            }
            cur[j] = min(cur[j - 1], prev[j]) + 1;
            if (grid[i][j] == cur[j])
            {
                cur[j] = grid[i][j] + 1;
            }   
        }
        prev = cur;
    }
    cout << cur[n - 1] << endl;
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