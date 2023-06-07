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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n <= 3)
    {
        cout << 0 << endl;
        return;
    }
    sort(a.begin(), a.end());

    int l = -1, r = 1e9;
    while (r - l > 1)
    {
        int mid = (l + r) >> 1;
        int i = 0;
        while (i + 1 < a.size() && a[i + 1] - a[0] <= 2 * mid)
        {
            i++;
        }
        int j = n - 1;
        while (j - 1 >= 0 && a.back() - a[j-1] <= 2 * mid)
        {
            j--;
        }
        i++;
        j--;
        if (i > j || a[j] - a[i] <= 2 * mid)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }

    cout << r << endl;
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