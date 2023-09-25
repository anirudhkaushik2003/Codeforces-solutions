#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

#define mod 998244353
long long factorial(long long n)
{
    long long ans = 1;
    for(int i = 1; i<= n;i++)
    {
        ans*= i;
        ans%= mod;
    }
    return ans;
}
void solve()
{
    int n;
    string s;
    cin >> s;
    n = (int) s.size();

    ll ans = 0;
    vector<int> st;
    ll temp = 0;
    for(int i = 0; i< n;i++)
    {
        if(s[i] == s[i-1])
        {
            temp++;
            ans++;
            
        }
        else{
            if(temp > 0)
                st.pb(temp+1);
            temp = 0;
        }
    }
    if(temp > 0)
        st.pb(temp+1);

    long long ans2 = 0;
    for(auto it: st)
    {
       ans2 += it;
       ans2 %= mod;
    }
    ans2 -= (ll) st.size();


    ans2 = factorial(ans2);
    ans2 = ans2%mod;

    long long ans3 = 1;
    for(auto it: st)
    {
        ans3 *= it;
        ans3 %= mod;
    }

    ans3 = ans3*ans2;
    ans3 %= mod;
    cout << ans << " " << ans3 << endl;
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