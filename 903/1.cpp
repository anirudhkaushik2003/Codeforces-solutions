#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

bool check(string &x, string &s)
{
    int n = s.length();
    for(int i = 0; i+n -1< x.length(); i++)
    {
        if(x.substr(i,n) == s)
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    int n,m;
    cin >> n >> m;
    string x, s;

    cin >> x;
    cin >> s;

    int ops = 0;

    int l = 0;

    while(check(x, s) == false  && ops < 5)
    {
        x += x;
        ops++;
    }
    if(check(x, s))
    {
        cout << ops << endl;
    }
    else{
        cout << -1 << endl;
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