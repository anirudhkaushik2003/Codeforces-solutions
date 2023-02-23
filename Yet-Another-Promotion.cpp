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
    ll a,b;
    cin >> a >> b;
    ll n, m;
    cin >> n >> m;

    if (a < b){

        // price_a *(m+1)
        ll num_together = n/(m+1);
        ll num_separate = n - (num_together*(m+1));
        ll price_a = num_together*a*m + num_separate*a;

        cout << price_a << endl;
        return;
    }

    else{
        ll num_together = n/(m+1);
        ll num_separate = n - (num_together*(m+1));

        ll price_1 = n*b;
        ll price_2 = num_together*a*m + num_separate*b;
        cout << min(price_1, price_2) << endl;
        return;
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