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
    int n;
    cin >> n;
    cin >> s;

    int ans = 2;
    int top = 0;
    int count = 1;
    int m1 = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1] )
        {
            count++;
        }
        else
        {
            // cout << count << " ";
            m1 = max(m1, count);
            count = 1;
        }
        // cout << res1[i] << " " << res2[i] << endl;
        // cout << s[i] << " " << s[i - 1] << endl;
    }
    m1 = max(m1, count);
    cout << m1+1 << endl;
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