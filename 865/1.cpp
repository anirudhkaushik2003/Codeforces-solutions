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
    ll a, b;
    cin >> a >> b;
    cout << 2 << endl;
    vector<pair<ll, ll>> neighbor;

    neighbor.push_back(make_pair(a, b - 1));
    neighbor.push_back(make_pair(a, b + 1));
    neighbor.push_back(make_pair(a - 1, b));
    neighbor.push_back(make_pair(a + 1, b));
    neighbor.push_back(make_pair(a - 1, b - 1));
    neighbor.push_back(make_pair(a - 1, b + 1));
    neighbor.push_back(make_pair(a + 1, b - 1));
    neighbor.push_back(make_pair(a + 1, b + 1));
    int cond = 0;
    for (int i = 0; i < 8; i++)
    {
        if (neighbor[i].first > 0 && neighbor[i].second > 0 && neighbor[i].first <= 1000000000 && neighbor[i].second <= 1000000000)
        {
            if (__gcd(neighbor[i].first, neighbor[i].second) == 1)
            {
                cout << neighbor[i].first << " " << neighbor[i].second << endl;
                cond = 1;
                break;
            }
        }
    }
    if (cond == 1)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        cout << a << " " << b << endl;
        cout << a << " " << b << endl;
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