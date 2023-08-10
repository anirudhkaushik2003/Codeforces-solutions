#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long 

void solve()
{
    ll n,m;
    cin >> n;
    m = (n*(n-1)) >> 1 ;
    
    vi a(m);
    for(int i =0; i < m; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int j = 1;
    for(int i = 0; i < m;i++)
    {
        cout << a[i] << " ";
        i = (n-j + i-1);

        j++;
    }
    cout << (ll)1e9<< endl;
    
    
}
 int main()
 {
     int t;
     cin >> t;
     while(t--)
     {
         solve();
     }
 }