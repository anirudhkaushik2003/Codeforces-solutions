#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

bool split(int n, int m)
{
    if (n == m)
    {
        return true;
    }
    if(n < m)
    {
        return false;
    }
    if(n%3 == 0)
    {
        return split(n/3, m) || split((2*n)/3, m);
    }
    return false;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    

    if(split(n, m))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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