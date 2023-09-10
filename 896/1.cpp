#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
int countBits(int n)
{
   int count = 0;
   while (n)
   {
        count++;
        n >>= 1;
    }
    return count;
}
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for(auto &x:a) cin >> x;

    if(n&1 == 1)
    {
        cout << 4 << endl;
        cout << 2 << " " << n << endl;
        cout << 2 << " " << n << endl;
        cout << 1 << " " << n-1 << endl;
        cout << 1 << " " << n-1 << endl;
        
    
    }
    else{
        cout << 2 <<endl;
        cout << 1 << " " << n << endl;
        cout << 1 << " " << n << endl;
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