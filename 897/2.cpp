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
    string s;

    cin >> s;

    int i, j;
    int min_ones = 0;
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            min_ones++;
        }
    }
    if (n&1)
    {
        for (i = 0; i <= n; i++)
        {
            if(i == min_ones)
            {
                cout << "1";
            }
            else if(i > min_ones && i <= n - min_ones)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
    else
    {
        for (i = 0; i <= n; i++)
        {
            if (i == min_ones)
            {
                cout << "1";
            }
            else if (i > min_ones && i <= n - min_ones && ((i - min_ones) % 2 == 0))
                cout << "1";

            else
            {
                cout << "0";
            }
        }
        cout << endl;
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