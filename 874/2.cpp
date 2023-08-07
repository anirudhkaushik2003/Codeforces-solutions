#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>


void pairsort(vll a, vll b, int n)
{
    
}

void solve()
{
    int n;
    ll k;
    cin >> n >> k;

    vll a(n);
    for (auto &x : a)
        cin >> x;

    vll b(n);
    for (auto &x : b)
        cin >> x;

    // 0 to n indices
    vll indices(n);
    for (int i = 0; i < n; i++)
        indices[i] = i; 

    pair<ll, ll> pairt[n];
 
    // Storing the respective array
    // elements in pairs.
    for (int i = 0; i < n; i++)
    {
        pairt[i].first = a[i];
        pairt[i].second = indices[i];
    }
 
    // Sorting the pair array.
    sort(pairt, pairt + n);
     
    // Modifying original arrays
    for (int i = 0; i < n; i++)
    {
        a[i] = pairt[i].first;
        indices[i] = pairt[i].second;
    }
    sort(b.begin(), b.end());


    for (int i = 0; i < n; i++)
    {
        pairt[i].first = indices[i];
        pairt[i].second = b[i];
    }
 
    // Sorting the pair array.
    sort(pairt, pairt + n);
     
    // Modifying original arrays
    for (int i = 0; i < n; i++)
    {
        indices[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
    
    for (int i = 0; i < n; i++)
        cout << b[indices[i]] << " ";
    cout << endl;
    // output b in order of a_copy using map
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