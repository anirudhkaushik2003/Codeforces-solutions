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
    vector<ll> a(n);
    vector<ll> b(n);

    // better code for taking in arrays 
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    vector <ll> pref(n+1, 0); // initializedto 0

    for(int i = 0; i<n; i++){
        pref[i+1] = pref[i] + b[i]; // pref_1 = 0+b0, pref_2 = b0+b1, ...
    }
    // pref_j = b0+ b1+ ... + bj-1

    vector <ll> cnt(n+1), add(n+1);

    for(int i = 0; i< n; i++){
        ll pref_j = upper_bound(pref.begin(), pref.end(), a[i] + pref[i]) - pref.begin() - 1;
        // delta encoding -> increments 1 over range i to pref_j-1 both inclusive
        cnt[i]++;
        cnt[pref_j]--;
        add[pref_j] += a[i] - pref[pref_j] + pref[i];;    
    }

    for (int i  = 0; i<n; i++){
        cout << cnt[i]*b[i] + add[i] << " ";
        cnt[i+1] += cnt[i];
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
    cin >> t;
    while (t--)
    {
        solve();
    }
}