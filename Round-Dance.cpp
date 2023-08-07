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
    if(v == parent[v])
        return v;
    return parent[v] = find_set(parent[v], parent);
}

void union_sets(ll a, ll b, vll &parent, vll &rank)
{
    a = find_set(a, parent);
    b = find_set(b, parent);
    if(a != b)
    {
        if(rank[a] < rank[b])
            swap(a, b);
        parent[b] = a;
        if(rank[a] == rank[b])
            rank[a]++;
    }
}

void solve()
{
    int n;
    cin >> n;
    vll a(n);

    // don't exactly understand ho g is used to detect cycles and bamboos
    vector<set<int>> g(n);
    for (int i = 0 ; i< n; i++)
    {
        cin >> a[i];
        g[a[i]-1].insert(i);
        g[i].insert(a[i]-1);
    }

    vll parent(n);
    vll rank(n);

    vi count(n, 0);
    for (int i = 0; i < n; i++)
    {
        count[i] = g[i].size();
        make_set(i, parent, rank);
    }
    for (int i = 0; i < n; i++)
    {
        union_sets(i, a[i] - 1, parent, rank);
    }
    set<ll> max_arr;
    vector<set<int>> components(n, set<int>());
    int cycles = 0, bamboos = 0;
    for (int i = 0; i < n; i++)
    {
        int p = find_set(i, parent);
        max_arr.insert(p);
        components[p].insert(i);
        components[p].insert(p);
    }
    for (int q = 0; q < components.size(); q++)
    {
        auto x = components[q];
        bool bamboo = false;
        if (x.size() > 0)
        {
            if (count[q] == 1)
            {
                bamboo = true;
            }
            else
            {
                for (auto j : x)
                {
                    if (count[j] == 1)
                    {
                        bamboo = true;
                        break;
                    }
                }
            }
            if (bamboo)
                bamboos++;
            else
                cycles++;
        }
    }
    cout << cycles + min(bamboos, 1) << " " << max_arr.size() << endl;
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