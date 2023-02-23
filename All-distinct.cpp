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
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    x = a[0];
    sort(a.begin(), a.end(), greater<int>());
    vi ind;
    int num = 1;
    int j = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            num++;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            j++;
        }
        else
        {
            ind.pb(j);
            j = 1;
        }
    }
    ind.push_back(j);
    sort(ind.begin(), ind.end(), greater<int>());
    vi p;
    int num2 = 0;
    for (int i = 0; i < ind.size(); i++)
    {
        // cout << ind[i] << endl;
        if (ind[i] % 2 == 0)
        {
            num2++;
        }
    }
    if (num2 % 2 != 0)
        num -= 1;

    cout << num << endl;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}