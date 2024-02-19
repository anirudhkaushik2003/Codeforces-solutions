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
    int score = 0;
    int thorn_len = 0;
    for(int i = 0; i < n; i++)
    {
        if(thorn_len >= 2)
        {
            break;
        }
        if(s[i] == '@')
        {
            score += 1;
            thorn_len = 0;
        }
        else if(s[i] == '*')
        {
            thorn_len += 1;
        }
        else{
            thorn_len = 0;
        }
        
    }
    cout << score << endl;
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