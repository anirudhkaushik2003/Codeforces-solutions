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
    map<int, int> hashmap;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hashmap[a[i]] = 0;
    }
    for (int i = 0; i < n; i++)
        hashmap[a[i]]++;
    sort(a.begin(), a.end());
    vi dp(n, 0);
    for (int j = 0; j < hashmap[a[0]]; j++)
    {
        dp[j] = hashmap[a[0]];
    }
    int i = hashmap[a[0]];
    for (; i < n;)
    {
        for (int j = i; j < i + hashmap[a[i]]; j++)
        {
            dp[j] = dp[i - 1] + hashmap[a[i]];
        }
        i += hashmap[a[i]];
    }
    // auto  it = unique(a.begin(), a.end());
    // a.resize(distance(a.begin(), it));
    int liars = 0;
    for (i = n - 1; i >= 0; i--)
    {
        if (dp[i] > (n - a[i]))
        {
            liars++;
            if (a[i] == liars)
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    if (liars == n)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << liars << endl;
    }
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