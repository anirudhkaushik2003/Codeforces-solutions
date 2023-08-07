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
    for (auto &x : a)
    {
        cin >> x;
    }
    if (n % 2 == 0)
    {
        for (int i = 1; i + 1 < n; i+=2)
        {
            if (a[n - i - 1] < a[n - i])
            {
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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