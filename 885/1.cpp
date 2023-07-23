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
    int n, m, k;
    cin >> n >> m >> k;
    vector<vi> v(k, vi(2));
    vi vika = {0, 0};
    cin >> vika[0] >> vika[1];
    for (auto &x : v)
    {
        cin >> x[0] >> x[1];
    }
    vector<vi> board(n, vi(m, 0));
    int cond = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = cond; j < m; j += 2)
        {
            board[i][j] = 1;
        }
        cond = (cond + 1) % 2;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << board[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int c = board[vika[0] - 1][vika[1] - 1];

    for (int i = 0; i < k; i++)
    {
        if (board[v[i][0] - 1][v[i][1] - 1] == c)
        {
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
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