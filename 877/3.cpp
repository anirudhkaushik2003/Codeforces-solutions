#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
vector<bool> is_prime;
vector<bool> sieve(int n)
{
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    return is_prime;
}
void solve()
{
    int n, m;
    cin >> n >> m;
    if (!is_prime[n])
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << j * n + i << " ";
            }
            cout << endl;
        }
        cout << endl;

        return;
    }
    if (!is_prime[m])
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                cout << m * i + j << " ";
            }
            cout << endl;
        }
        cout << endl;

        return;
    }
    vector<vi> a(n, vi(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m + 1; j++)
        {
            a[i][j - 1] = m * i + j;
        }
    }
    // shuffle rows such that consecutive rows are not adjacent
    vector<int> row(n);
    row[0] = 0;
    for (int i = 1; i < n + 1; i++)
        row[i] = (row[i-1] + 2) % n;
    for (auto it : row)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[it][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    is_prime = sieve(1001);
    cin >> t;
    while (t--)
    {
        solve();
    }
}