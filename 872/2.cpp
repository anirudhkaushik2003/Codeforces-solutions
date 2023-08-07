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
    int n, m;
    cin >> n >> m;

    vi a(n * m);

    for (auto &x : a)
        cin >> x;

    int row = max(n, m);
    int col = min(n, m);

    sort(a.begin(), a.end(), greater<int>());

    int a1 = a[0];
    int a2 = a[(n * m) - 1];
    int a3 = a[(n * m) - 2];

    int a4 = a[1];

    if (((a1 - a2) + (a1 - a3)) > ((a1 - a2) + (a4 - a2)))
    {

        ll ans = 0;

        ll col_sum = (a1 - a3) * (col - 1);

        ll net_sum = (a1 - a2) * (row * col - col);

        ans = col_sum + net_sum;

        cout << ans << endl;
        return;
    }
    else
    {

        ll ans = 0;

        ll col_sum = (a4 - a2) * (col - 1);

        ll net_sum = (a1 - a2) * (row * col - col);

        ans = col_sum + net_sum;

        cout << ans << endl;
        return;
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