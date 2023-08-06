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
    
    vi a(n);
    ll ones = 0;
    ll sum = 0;
    for(auto &x:a)
    {
        cin >> x;
        if(x == 1)
        {
            ones++;
        }
        else{
            sum += x-1;
        }
    }
    if(n==1)
    {
        cout << "NO" << endl;
        return;
    }
    if(sum < ones)
    {
        cout << "NO" << endl;
    }
    else{
        cout<< "yes" << endl;
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