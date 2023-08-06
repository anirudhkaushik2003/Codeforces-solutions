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
    int n,k;
    cin >> n >> k;

    vi a(n);
    for(auto &x:a)
    {
        cin >> x;
    }
    // int ind_max = max_element(a.begin(),a.end()) - a.begin();
    // int max_val = a[ind_max];
    int i = 0;
    for(i = n-2;i>=0;i--)
    {
        if(a[i]<a[i+1])
        {
            break;
        }
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