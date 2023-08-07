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

    vll a(n);
    for (auto &x : a)
        cin >> x;

    sort(a.begin(), a.end());
    int i = 0;
    int cond = -1;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            cond = 0;
            break;
        }
    }
    if (i == 0 || i == n) // all even or all odd
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