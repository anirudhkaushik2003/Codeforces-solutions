#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
int cond = 0;

long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

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

    for (int i = j - m + 1; i >= 0 && j >= m - 1;)
    {
        i = j - m + 1;

        if ((s[j] - s[i] < m))
        {
            dp[i] = j;
        }
        j--;
    }
    // for(auto it: dp)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    ll ans = 0;
    vll prefix_product(s.size(), 1);
    prefix_product[0] *= hasmap[s[0]];
    prefix_product[0] %= p;
    // cout << prefix_product[0] << " ";
    for (int i = 1; i < s.size(); i++)
    {
        prefix_product[i] *= hasmap[s[i]];
        prefix_product[i] %= p;
        prefix_product[i] *= prefix_product[i - 1];
        prefix_product[i] %= p;
        // cout << prefix_product[i] << " ";
    }
    // cout << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (dp[i] != -1)
        {
            ll range = dp[i] - i + 1;
            // pow_n should be calculated using binary exponentiation, it is equal to 2^range modulo 1e9+7
            // cout << "range: " << range << " " << i << " " << dp[i] <<  endl;
            ll pow_n = 1;
            if (i > 0)
            {
                pow_n = prefix_product[dp[i]]%p;
                pow_n *= binpow(prefix_product[i - 1], p - 2, p); // dont divide by prefix, instead multiply by inverse modulo IMPORTANT as this kept failing test cases
            }
            else
            {
                pow_n = prefix_product[dp[i]];
            }
            // cout << "pow_n: " << pow_n << endl;
            // pow_n %= p;

            // cout << "ncr: " << pow_n << endl;
            // for (int l = i; l <= dp[i]; l++)
            // {
            //     if (hasmap[s[l]] > 1)
            //     {
            //         pow_n *= hasmap[s[l]];
            //         // cout << "hasmap: " << hasmap[s[l]] << endl;
            //         pow_n %= p;
            //     }
            // }

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
    if (t == 100)
        cond = 1;
    else
        cond = 0;
    while (t--)
    {
        solve();
    }
}