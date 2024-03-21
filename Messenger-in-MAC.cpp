#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
struct sort_pred
{
    bool operator()(const std::pair<ll, ll> &left, const std::pair<ll, ll> &right)
    {
        return left.second < right.second;
    }
};
void solve()
{
    int n, L;
    cin >> n >> L;
    vector<pll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), sort_pred());

    int ans = 0;
    for (int l = 0; l < n; l++)
    {
        multiset<int> s;
        int cur = 0;

        for (int r = l; r < n; r++)
        {
            s.insert(a[r].first);
            cur += a[r].first;

            while (!s.empty() && a[r].second - a[l].second + cur > L)
            {
                int max_value = *s.rbegin();
                cur -= max_value;
                s.extract(max_value);
            }
            ans = max(ans, (int)s.size());
        }
    }

    cout << ans << endl;
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