#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct compare
{
    bool operator()(const pair<int, int> &value,
                    const int &key)
    {
        return (value.first < key);
    }
    bool operator()(const int &key,
                    const pair<int, int> &value)
    {
        return (key < value.first);
    }
};
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(a[i] % k, i));
    }
    sort(v.begin(), v.end());
    ll sum = 0;
    ll temp;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            continue;
        }
        ll mod = (k-(a[i]%k))%k;

        
        temp = lower_bound(v.begin(), v.end(), mod, compare()) - v.begin();
        if (i != v[temp].second)
        {
            sum += (a[i] + a[v[temp].second]) / k;
            a[v[temp].second] = -1;
            v.erase(temp+v.begin());
        }
        else
        {
            temp = upper_bound(v.begin(), v.end(), a[i], compare()) - v.begin();
            if (i != v[temp].second)
            {
                sum += (a[i] + a[v[temp].second]) / k;
                a[v[temp].second] = -1;
                v.erase(temp+v.begin());
            }
        }
    }
    cout <<"ooo->" <<sum << endl;
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