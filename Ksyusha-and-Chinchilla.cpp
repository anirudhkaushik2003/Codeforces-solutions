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

void dfs(ll v, vll &parent, vector<set<ll>> &G)
{
    if (find_set(v, parent) != v)
    {

        dfs(find_set(v, parent), parent, G);
        for (auto u : G[v])
        {
            G[find_set(v, parent)].insert(u);
        }
    }
    else
    {
        G[v].insert(v);
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<set<ll>> G(n, set<ll>());

    vector<pair<ll, ll>> E(n - 1);

    vll parent(n), rank(n);

    for (int i = 0; i < n; i++)
    {
        make_set(i, parent, rank);
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> E[i].first >> E[i].second;
        E[i].first--;
        E[i].second--;
        if (E[i].first > E[i].second)
        {
            swap(E[i].first, E[i].second);
        }
        union_sets(E[i].first, E[i].second, parent, rank);
    }
    for (int i = 0; i < n; i++)
    {
        G[parent[i]].insert(i);
    }
    for (int i = 0; i < n; i++)
    {
        if (find_set(i, parent) != i)
        {
            dfs(i, parent, G);
        }
        else
        {
            G[i].insert(i);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << G[i].size() << " ";
    }
    cout << endl;
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