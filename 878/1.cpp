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
    string s;
    cin >> s;
    char cur = s[0];
    string a = "";
    a = a + s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i] == cur)
        {
            i++;
            if (i < n)
            {
                a += s[i];
                cur = s[i];
            }
        }
    } cout << a << endl;
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