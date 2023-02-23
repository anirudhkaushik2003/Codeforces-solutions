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
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    vll a(n);
    for (auto& x : a) cin >> x; // take input to array

    vll cnt(n+1, 0);
    while(q--)
    {
        ll l, r;
        cin >> l >> r;
        // delta encoding -> increments 1 over range l-1 to r-1 both inclusive (over here it is one-indexed)
        cnt[l-1]++;
        cnt[r]--;
    }
    for(int i = 0; i < n; i++) cnt[i+1] += cnt[i];

    sort(cnt.begin(), cnt.end(),greater<ll>());
    sort(a.begin(), a.end(), greater<ll>());

    ll sum = 0;
    for( int i =0; i<n; i++) sum += cnt[i]*a[i];
    cout << sum << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}