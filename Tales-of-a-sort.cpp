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
    vll a(n);

    for(auto &x:a)
    {
        cin >> x;
    }
    int cond = 0;
    int i = 0;
    for(i = n-1;i>=1;i--)
    {
        if(a[i] < a[i-1])
        {
            cond = 1;
            break;
        }
    }
    if(cond == 1)
    {
        long long ans = *max_element(a.begin(),a.begin()+i+1) ;
        cout  << ans << endl;
    }
    else{cout << 0 << endl;}
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