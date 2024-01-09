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
    vi v(n);
    for(auto &x: v)
        cin >> x;

    vll prefix(n);
    vll odd(n);
    prefix[0] = v[0];
    if(v[0] & 1)
        odd[0] = 1;
    else
        odd[0] = 0;
    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] + v[i];
        if(v[i] & 1)
            odd[i] = odd[i-1] + 1;
        else
            odd[i] = odd[i-1];
    }

    cout << prefix[0] << ' ';
    for(int i = 1; i < n; i++)
    {
        if(odd[i]%3 == 1){
            cout << prefix[i] - odd[i]/3 - 1 << ' ';
        }
        else{
            cout << prefix[i] - odd[i]/3 << ' ';
        
        }
    }
    cout << endl;

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