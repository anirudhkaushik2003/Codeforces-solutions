#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long

void solve()
{
    string a, b;
    cin >> a;
    cin >> b;
    int l =0;
    int r = a.size()-1;

    if(a[l] != b[l] || a[r] != b[r])
    {
        cout << "NO" << endl;
        return;
    }
    if(a[l] == a[r])
    {
        cout << "YES" << endl;
        return;
    }
    for(int i = r-1, j=r;i>=0;i--,j--)
    {
        if(a[i] == a[l] && b[i] == a[l] && a[j] == a[r] && b[j] == a[r])
        {
            cout << "YES" << endl; return;
        }
    }
    cout << "NO" << endl;
    return;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}