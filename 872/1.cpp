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
    int count = 0;

    int n = s.length();
    for (int i = 1; i< n; i++)
    {
        if(s[i] == s[0])
        {
            count = 0;
        }
        else{
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << n-1 << endl;
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