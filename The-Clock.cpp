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
    string s;
    int x;
    cin >> s >> x;
    int h = (s[0] - '0') * 10 + (s[1] - '0');
    int m = (s[3] - '0') * 10 + (s[4] - '0');
    int hrs = x / 60;
    int min = x % 60;
    int sum = 0;
    int h1 = h / 10;
    int h2 = h % 10;
    int m1 = m / 10;
    int m2 = m % 10;
    vector<pii> a;
    a.pb(mp(h, m));
    if (h1 == m2 && h2 == m1)
    {
        sum++;
    }
    while (1 > 0)
    {
        // cout << h1 << h2 << ":" << m1 << m2 << endl;
        h = (h + hrs) % 24;
        h += ((m + min) / 60);
        h = h%24;
        m = (m + min) % 60;
        if (h == a[0].first && m == a[0].second)
        {
            break;
        }
        a.pb(mp(h, m));
        h1 = h / 10;
        h2 = h % 10;
        m1 = m / 10;
        m2 = m % 10;
        if (h1 == m2 && h2 == m1)
        {
            sum++;
        }
    }
    cout << sum << endl;
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