#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

void make_set(ll v, vll &parent, vll &rank);
ll find_set(ll v, vll &parent);
void union_sets(ll a, ll b, vll &parent, vll &rank);
