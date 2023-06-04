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
    int n, k;
    cin >> n >> k;
    vi a(n);
    int ans = 0;
    int l1 = 0, l2 = 0;

    for (int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {

        int r1 = ceil(float(i + 1) / float(k));

        if (l1 < r1)
        {
            a[i] = 1;
            l1++;
        }
    }
    for (int j = n - 1; j >= 0; j--)
    {
        int r2 = ceil(float((n - j)) / float(k));
        if (a[j] == 1)
        {
            l2++;
        }
        if (l2 < r2)
        {
            a[j] = 1;
            l2++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }
    cout << ans << endl;
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