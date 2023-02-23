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
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    if (n < 4)
    {
        cout << -1 << endl;
        return;
    }
    // two pointer
    ll min = 1, max = n;
    ll p = 0, q = n - 1;

    while (p < q)
    {
        if (a[p] == min)
        {
            p++;
            min++;
        }
        else if (a[p] == max)
        {
            p++;
            max--;
        }
        else if (a[q] == min)
        {
            q--;
            min++;
        }
        else if (a[q] == max)
        {
            q--;
            max--;
        }
        else
        {
            cout << p + 1 << " " << q + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
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