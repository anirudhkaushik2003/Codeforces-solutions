#include "dsu.h"

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