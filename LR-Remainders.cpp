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
    int n,m;
    cin >> n >> m;

    vi a(n);
    for(auto &x : a)
    {
        cin >> x;
    }
    string s;
    cin >> s;
    int l =0;
    int r = n-1;
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] == 'L')
        {
            l+=1;
        }
        else{
            r-=1;
        }
        // calculate product of all elements excluding first l and last r
    }
    vll ans(n);
    ans[n-1] = a[r]%m;
    for(int i = n-2; i>=0;i--)
    {
        if(s[i] == 'R')
        {
            ans[i] = ((ans[i+1]%m)*(a[++r]%m))%m;
        }
        else{
            ans[i] = ((ans[i+1]%m)*(a[--l]%m))%m;

        }
    }
    for(auto it: ans){
        cout << it << " ";
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