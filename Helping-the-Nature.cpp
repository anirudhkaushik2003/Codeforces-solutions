    // for (int i = 0; i < n; i++)
    // {
    //     if (i > 0)
    //         p[i] = a[i] + p[i - 1];
    //     else
    //         p[i] = a[i];
    //     cout << p[i] << " ";
    // }
    // cout << endl;

    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if (i == n - 1)
    //         s[i] = a[i];
    //     else
    //         s[i] = a[i] + s[i + 1];
    //     cout << s[i] << " ";
    // }
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
    vll a(n);
    vll d(n);
    vll s(n);
    vll p(n);
    ll sum = 0;
    ll curh = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }
    curh = a[0];
    for (int i = 0; i + 1 < n; i++)
    {

        d[i] = a[i + 1] - a[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        sum += abs(d[i]);
        if(d[i] < 0)
        {
            curh += d[i];
        }
    }
    sum += abs(curh);
    cout << sum << endl;
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