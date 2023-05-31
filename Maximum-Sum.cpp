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
    vll a(n);
    for (auto &x : a)
        cin >> x;

    sort(a.begin(), a.end());

    vll prefix_sum(n + 1, 0);
    prefix_sum[0] = 0;
    for (int i = 1; i < n + 1; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
    }

    ll max_sum = 0;

    int m = 0;
    while (m < k+1)
    {
        max_sum = max(max_sum, prefix_sum[n - (k - m)] - prefix_sum[2 * m]);
        m++;
    }

    cout << max_sum << endl;
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