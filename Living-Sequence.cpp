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
    int num_digits = ceil(log10(n));
    string s(num_digits + 1, '0');
    int index = 0;
    while (n > 0)
    {
        s[index++] = (n % 9) + '0';
        n /= 9;
    }
    // reverse string
    reverse(s.begin(), s.end());
    ll x = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' && i == 0)
            continue;
        else
        {
            int l = s[i] - '0';
            if (l >= 4)
                l += 1;
            x = x * 10 + l;
        }
    }
    cout << x << endl;
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