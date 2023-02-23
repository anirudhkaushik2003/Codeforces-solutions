#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{

    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> sum(n);

    vector<pair<ll, ll>> b(q);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> b[i].first >> b[i].second;

        if (b[i].second > b[i].first)
        {
            b[i].second = b[i].first;
        }
    }
    sort(a.begin(), a.end(), greater<ll>());
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            sum[i] = a[0];
        }
        else
        {
            sum[i] = sum[i - 1] + a[i];
        }
    }
    ll cost = 0;
    for (int i = 0; i < q; i++)
    {
        if (b[i].first == b[i].second)
        {
            cost = sum[b[i].first - 1];
        }
        else
        {
            cost = sum[b[i].first - 1] - sum[b[i].first - 1 - b[i].second];
        }
        cout << cost << endl;
    }
}