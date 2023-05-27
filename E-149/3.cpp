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

    int n = s.length();

    for(int  i = 0; i < n; i++)
    {
        if(s[i] == '?')
        {
            if(i == 0)
            {
                s[i] = '0';
            }
            else s[i] = s[i-1];
        }
    }
    cout << s << endl;
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