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
    vll v(n);

    for (auto &it : v)
    {
        cin >> it;
    }
    // min heap
    priority_queue<ll, vll, greater<ll>> pq;
    priority_queue<ll, vll, greater<ll>> bob;

    for (ll i = 0; i < n; i++)
    {
        pq.push(v[i]);
    }
    ll ans = 0;
    while (1)
    {
        ll y;
        ll a = INT_MAX;
        if (!pq.empty())
        {
            a = pq.top();
        }
        ll b = INT_MAX;

        if (!bob.empty())
        {
            b = bob.top();
        }

        // cout << "ans: " << ans << " a: " << a << " b: " << b << endl;
        if (a > ans)
        {
            if (b < ans)
            {

                cout << b << endl;
                bob.pop(); // reinsert b into set.

                fflush(stdout);
                cin >> y;

                if (y == -1 || y == -2)
                {
                    fflush(stdout);

                    if (y == -2)
                        exit(0);
                    return;
                }
                else
                {
                    bob.push(y);
                }
                if (b == ans)
                    ans++;
            }
            else
            {

                cout << ans << endl;

                fflush(stdout);
                cin >> y;

                if (y == -1 || y == -2)
                {
                    fflush(stdout);

                    if (y == -2)
                        exit(0);
                    return;
                }
                else
                {
                    bob.push(y);
                }

                ans++;
            }
        }

        else
        {

            pq.pop();
            ans++;
        }
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