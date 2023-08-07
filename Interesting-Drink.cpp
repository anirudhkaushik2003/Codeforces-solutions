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
    vll x(n);
    for (auto &i : x)
        cin >> i;

    int q;
    cin >> q;
    vll m(q);

    for (auto &i : m)
        cin >> i;

    vll cnt(1e5+1);
    cnt[0] = 0;
    for(int i = 0; i<n;i++)
    {
        cnt[x[i]]++;
    }
    for(int  i = 1 ; i < 1e5+1;i++)
    {
        cnt[i] += cnt[i-1];
    }

    for(auto i : m)
    {
        if(i > 1e5)
        {
            cout << n << endl;
        }
        else
        {
            cout << cnt[i] << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
}