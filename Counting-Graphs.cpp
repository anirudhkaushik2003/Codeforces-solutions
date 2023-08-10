#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

long long mod = 998244353;

void make_set(int node, vll &parent, vll &rank)
{
    parent[node] = node;
    rank[node] = 1;
}

int find_set(int node, vll &parent)
{
    if (parent[node] == node)
        return node;
    else
    {
        return parent[node] = find_set(parent[node], parent);
    }
}

void union_set(int a, int b, vll &parent, vll &rank)
{
    a = find_set(a, parent);
    b = find_set(b, parent);

    if (a != b)
    {
        if (rank[a] < rank[b])
        {
            swap(a, b);
        }

        parent[b] = a;
        rank[a] += rank[b];
    }
}

bool my_comp(vll &a, vll &b)
{
    return a[0] < b[0];
}

long long binpow(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return (res)%mod;
}
void solve()
{
    int n, s;
    cin >> n >> s;
    vector<vll> edges(n - 1, vll(3));
    vll parent(n + 1);
    vll rank(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        make_set(i, parent, rank);
    }
    int a, b, w;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b >> w;
        // edges[i] = {w, a, b};
        edges[i][0] = w;
        edges[i][1] = a;
        edges[i][2] = b;
        // cout << edges[i][0] << endl;
    }
    sort(edges.begin(), edges.end(), my_comp);

    long long ans = 1;
    for (int i = 0; i < n - 1; i++)
    {
        long long size_a = find_set(edges[i][1], parent);
        long long size_b = find_set(edges[i][2], parent);
        size_a = rank[size_a];
        size_b = rank[size_b];
        w = edges[i][0];

        long long num_w = (s - w + 1);

        long long sl = ((size_a * size_b) - 1) ;
        // cout <<  num_w << " " << sl  << endl;

        ans = ans * binpow(num_w, sl) % mod;

        union_set(edges[i][1], edges[i][2], parent, rank);
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