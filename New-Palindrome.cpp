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
    string a;
    cin >> a;
    n = a.size();
    int l, r;
    if (n % 2 == 0)
    {
        if (n == 2)
        {
            cout << "NO" << endl;
            return;
        }
        l = (n / 2) - 1;
        r = n / 2;
    }
    else
    {
        l = (n / 2) - 1;
        r = (n / 2) + 1;
    }
    string ans = "NO";
    for (int i = l - 1; i >= 0; i--)
    {
        if (a[i] != a[i + 1])
        {
            ans = "YES";
            break;
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