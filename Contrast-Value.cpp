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
    ll contrast = 0;
    int ans = 1;
    int sign = 0;
    for (int i = 1; i < n; i++)
    {
        int temp = (a[i] - a[i - 1]);
        if (temp != 0)
        {
            temp /= abs(a[i] - a[i - 1]);
        }
        if (sign != temp && temp != 0)
        {
            ans++;
            // cout << temp << endl;
            sign = temp;
        }
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