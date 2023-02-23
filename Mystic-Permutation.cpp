#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<int, int>> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    if (a.size() == 1)
    {
        cout << -1 << endl;
        return;
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i].second != i)
        {
        }
        else
        {
            if (i + 1 < n)
            {
                swap(a[i], a[i + 1]);
            }
            else
            {
                b[i - 1] = a[i].first;
                swap(a[i], a[i - 1]);
            }
        }
        b[i] = a[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
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