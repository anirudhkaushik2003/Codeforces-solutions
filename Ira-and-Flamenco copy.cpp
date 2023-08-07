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
    int n, m;
    cin >> n >> m;

    vll a(n);
    map<ll, ll> hasmap;
    for (auto &x : a)
    {
        cin >> x;
        hasmap[x] = 0;
    }
    if (m == 1)
    {
        cout << n << endl;
        return;
    }
    ll p = 1e9 + 7;

    sort(a.begin(), a.end());

    vector<ll> s;
    for (int i = 0; i < n; i++)
    {
        hasmap[a[i]]++;
        if (s.size() > 0)
        {
            if (a[i] != s.back())
            {
                s.pb(a[i]);
            }
        }
        else
        {
            s.pb(a[i]);
        }
    }
    // for(int i = 0 ; i < s.size(); i++)
    // {
    //     cout<<hasmap[s[i]]<<" ";
    // }
    // cout << endl;
    vll dp(s.size(), -1);
    int j = s.size() - 1;

    vll abc(n+1, -1);
    for (int i = s.size() - 2; i >= 0 && j >= 0;)
    {

        if ((s[j] - s[i] < m))
        {
            if (abs(j - i + 1) >= m)
            {
                dp[i] = j;
            }

            i--;
        }
        else
        {
            j--;
        }
        while (j <= i)
            i--;
    }
    // for(auto it: dp)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (dp[i] != -1)
        {
            ll range = dp[i] - i + 1;
            // pow_n should be calculated using binary exponentiation, it is equal to 2^range modulo 1e9+7
            // cout << "range: " << range << endl;
            ll pow_n = 1;
            if (abc[range] != -1)
            {
                pow_n = abc[range];
            }
            else
            {
                for (int i = 1; i <= m; i++)
                {
                    pow_n = pow_n * (range - m + i) / i;
                    pow_n %= p;
                    abc[range] = pow_n;
                }
            }
            // cout << "ncr: " << pow_n << endl;
            for (int l = i; l <= dp[i]; l++)
            {
                if (hasmap[s[l]] > 1)
                {
                    pow_n *= hasmap[s[l]];
                    // cout << "hasmap: " << hasmap[s[l]] << endl;
                    pow_n %= p;
                }
            }

            pow_n %= p;
            ans += pow_n;
            ans %= p;
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