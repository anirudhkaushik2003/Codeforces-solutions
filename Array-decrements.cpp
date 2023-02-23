#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    ll a[n], b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll  max = 0;
    for (int i = 0; i < n; i++)
    {

        c[i] = a[i] - b[i];
        if( max < c[i])
        {
            max = c[i];
        }
        if (c[i] < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            if(c[i] < max)
            {
                c[i] = max;
            }
        }
        // cout << c[i] << " ";
    }
    
    for (int i = 1; i < n; i++)
    {

        if (c[i] != c[i - 1])
        {
            
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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