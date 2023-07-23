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
    cin >> s;
    int n = s.size();
    int to_change = 0;

    map<char, int> m;
    m['E'] = 10000;
    m['D'] = 1000;
    m['C'] = 100;
    m['B'] = 10;
    m['A'] = 1;
    string temp = s;
    char largest_so_far = s[n - 1];
    temp[n - 1] = '+';
    for (int i = n - 2; i >= 0; i--)
    {
        if (s[i] >= largest_so_far)
        {
            largest_so_far = s[i];
            temp[i] = '+';
            // ans += m[s[i]];
        }
        else
        {
            // ans -= m[s[i]];
            temp[i] = '-';
        }
    }

    vi dp(n, 0);
    for (int i = 0; i < n; i++)
    {
        dp[i] =  (m[s[i]] * (temp[i] == '+' ? 1 : -1));
    }
    int min_so_far = dp[0];
    int min_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] < min_so_far)
        {
            min_so_far = dp[i];
            min_index = i;
        }
        // cout << dp[i]<< ' ';
    }
    s[min_index] = 'E';
    cout << s << endl;
    temp[min_index] = '+';
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += m[s[i]] * (temp[i] == '+' ? 1 : -1);
        // ans -= m[s[i]] * (temp[i] == '-' ? 1 : -1);
    }
    cout << ans << endl;
    // cout << endl;
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