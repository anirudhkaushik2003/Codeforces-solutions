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
    if (m == 2)
    {
        cout << 2 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 0 << " " << 1 << endl;
        }
    }

    if (n >= m)
    {
        if (n > 3)
        {
            cout << n + 1 << endl;
        }
        else
            cout << m << endl;
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
    int k = 0;
    while (j < n)
    {
        for (int i = m - 1; i >= 0; i--)
        {
            int temp = i - k;
            if (temp < 0)
            {
                temp += m;
            }
            cout << temp << " ";
        }
        cout << endl;
        j++;
        k++;
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