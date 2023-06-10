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
    int n, q;
    cin >> n >> q;
    vi a(n);
    vi p(n - 1);
    p[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0 && i < n - 1)
        {
            if (a[i] <= a[i - 1] && a[i] >= a[i + 1])
            {
                p[i] = p[i - 1] + 1;
            }
            else
            {
                p[i] = p[i - 1];
            }
        }
    }
    for(int i =0;i<q;i++)
    {
        int l, r;
        cin >> l >> r;
        --l,--r;
        if(l == r)
        {
            cout <<1<< endl;

        }
        else{
            cout << r-l+1 - p[r-1] + p[l] << endl;
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