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
    int n, m;
    cin >> n >> m;

    if (m == 1)
    {
        cout << 0 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 0 << endl;
        }
        return;
    }
    

    if (n >= m-1)
    {
        cout <<  m << endl;
    }
    else
    {
        cout << n + 1 << endl;
    }
    int j;
    for (j = 0; j < (m - 1) && j < n; j++)
    {
        for (int i = m - 1; i >= 0; i--)
        {
            int temp = i - j;
            if (temp < 0)
            {
                temp += m;
            }
            cout << temp << " ";
        }
        cout << endl;
    }
    while (j < n)
    {
        for (int i = m - 1; i >= 0; i--)
        {
            int temp = i - (m-2);
            if (temp < 0)
            {
                temp += m;
            }
            cout << temp << " ";
        }
        cout << endl;
        j++;
    }
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