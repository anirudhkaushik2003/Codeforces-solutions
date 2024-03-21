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
    ll k,x,a;
    cin >> k >> x >> a;
    ll acp =a;
    ll z = 1;
    ll bet = 1;
    x--;
    acp -= 1;

    while(x--)
    {
        bet = (z + k-1)/(k-1);
        acp -= bet;
        z += bet;
        if(acp < 0)
        {
            cout << "NO" << endl;
            return;
        }
        if(bet < 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if(acp < 0)
    {
        cout << "NO" << endl;
        return;
    }
    if(acp*k <= a)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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