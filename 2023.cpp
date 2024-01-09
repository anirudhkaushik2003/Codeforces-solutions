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
    int n, k;
    cin >> n >> k;
    vi v(n);
    for (auto &x : v)
        cin >> x;

    vi ref;
    ref.pb(1);
    ref.pb(7);
    ref.pb(17);
    ref.pb(119);
    ref.pb(289);
    ref.pb(2023);



    long long prod = 1;

    for(auto it: v)
    {
        if(2023%it != 0)
        {
            cout <<  "NO" << endl;
            return;
        }
        prod *= it;
        if(prod > 2023 || 2023%prod != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if(2023%prod != 0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(int i = 0; i < k-1;i++)
    {
        cout << 1 << " " ;
    }
    cout << 2023/prod << endl;
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