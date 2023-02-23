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
    cin >> n >> m;
    int a[n][m];
    char tmp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            a[i][j] = tmp - '0';
        }
    }
    int total_op = 0;

    for (int j = 0; j + 1< m; j+=2)
    {
        // column of first cell in current sub-square of
        // size k x k
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[j][i];
        }
        sum = m - sum;
    }
    for (int j = 1; j + 1< m; j+=2)
    {
        // column of first cell in current sub-square of
        // size k x k
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            if(a[i-1][j] + a[i][j] == 0 && a[i][j] )
            {
                total_op += 1;
            }

        }
        sum = m - sum;
    }
    for (int i = 0; i < n - 2 + 1; i++)
    {
        // column of first cell in current sub-square of
        // size k x k
        for (int j = 0; j < m - 2 + 1; j++)
        {
            // Calculate and print sum of current sub-square
            int sum = 0;
            sum += a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];
            a[i][j] = 0;
            a[i][j + 1] = 0;
            a[i + 1][j] = 0;
            a[i + 1][j + 1] = 0;
            if (sum >= 2)
            {
                total_op += 2;
            }
            else if (sum == 1)
            {
                total_op += 1;
            }
            else if (sum == 0)
            {
            }
        }
    }
    cout << total_op << endl;
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