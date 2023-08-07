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
    int n,a,b,c;
    cin >> n >> a >> b >> c;

    vi abc = {a,b,c};
    sort(abc.begin(),abc.end());
    a = abc[0];
    b = abc[1];
    c = abc[2];

    vi ans;

    for(int x = 0; x <= 4000; x++)
    {
        for(int y = 0; y <= 4000; y++)
        {
            int z = (n - a*x - b*y)/c;
            if(a*x + b*y + c*z == n && z >= 0)
            {
                ans.pb(x+y+z);
            }
        }
    }

    cout << *max_element(ans.begin(),ans.end()) << endl;

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}