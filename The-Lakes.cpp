#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
void make_set(ll v, vll &parent, vll &rank)
{
    parent[v] = v;
    rank[v] = 0;
}

ll find_set(ll v, vll &parent)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v], parent);
}

void union_sets(ll a, ll b, vll &parent, vll &rank)
{
    a = find_set(a, parent);
    b = find_set(b, parent);
    if (a != b)
    {
        if (rank[a] < rank[b])
            swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b])
            rank[a]++;
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vi> a(n, vi(m));
    vector<ll> dp(n * m, 0);
    vector<ll> parent(n * m);
    vector<ll> rank(n * m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            make_set(i * m + j, parent, rank);
            if (a[i][j] > 0)
            {
                if (j > 0)
                {
                    if (a[i][j - 1] > 0)
                    {
                        union_sets(i * m + j, i * m + j - 1, parent, rank);
                    }
                }
                if (i > 0)
                {
                    if (a[i - 1][j] > 0)
                    {
                        union_sets(i * m + j, (i - 1) * m + j, parent, rank);
                    }
                }
            }
            // if(j< m-1)
            // {
            //     if(a[i][j+1]>0)
            //     {
            //         union_sets(i*m+j, i*m+j+1, parent, rank);
            //     }
            // }
            // if(i<n-1)
            // {
            //     if(a[i+1][j]>0)
            //     {
            //         union_sets(i*m+j, (i+1)*m+j, parent, rank);
            //     }
            // }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > 0)
            {
                dp[find_set(i * m + j, parent)] += a[i][j];
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << parent[i * m + j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    cout << *max_element(dp.begin(), dp.end()) << endl;
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