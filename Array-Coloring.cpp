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
    int n;
    cin >> n;
    vi a(n);
    int o = 0, e = 0;
    for(auto &x: a)
    {
        cin >> x;
        if(x &1)
        {
            o++;
        }
        else{
            e++;
        }
    }
    if(o& 1)
    {
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }
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