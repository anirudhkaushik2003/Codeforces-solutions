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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m_ind = max_element(a.begin(), a.end()) - a.begin();
    int m = a[m_ind];
    int l_ind = min_element(a.begin(), a.end()) - a.begin();
    int l = a[l_ind];
    if (abs(l) > abs(m))
    {
        swap(m, l);
        swap(m_ind, l_ind);
    }
    int k = 0;
    vector<pii> op;
    if (m < 0)
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i] > 0)
            {
                k++;
                op.pb({i, m_ind});
                a[i] += a[m_ind];
            }
        }
        for(int i = n-2; i>= 0; i--)
        {
            if(a[i] > a[i+1])
            {
                k++;
                op.pb({i, i+1});
                a[i] += a[i+1];
            }
        }
    }
    if(m > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if(a[i] < 0)
            {
                k++;
                op.pb({i, m_ind});
                a[i] += a[m_ind];

            }
        }
        for(int i = 1;i<n;i++)
        {
            if(a[i] < a[i-1])
            {
                k++;
                op.pb({i, i-1});
                a[i] += a[i-1];
            }
        }
    }

    cout << k << endl;
    for (auto it : op)
    {
        cout << it.first + 1 << " " << it.second + 1 << endl;
    }
    // for (auto it : a)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;
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