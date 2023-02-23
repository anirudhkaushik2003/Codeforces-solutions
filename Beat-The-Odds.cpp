#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// remove minimum number of elements to remove such that sum of two consecutive elements is even

void solve()
{
    int n;
    int odd = 0, even = 0;
    cin >> n;
    vector<ll> a(n);
    int sum = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]%2 == 0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    
    if (odd < even)
    {
        cout << odd << endl;
    }
    else
        cout << even << endl;
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