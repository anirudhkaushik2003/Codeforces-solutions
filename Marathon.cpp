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
    int n = 4;
    vi a(n);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    x = a[0];
    sort(a.begin(), a.end(),greater<int>());
    
    cout << find(a.begin(), a.end(), x) -a.begin()  << endl;

}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}