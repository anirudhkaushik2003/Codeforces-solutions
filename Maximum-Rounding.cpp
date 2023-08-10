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
    string s;
    cin >> s;
    s = "0" + s;
    int num_digits = s.size();

    vi a(num_digits);
    for (int i = 0; i < num_digits; i++)
    {
        a[i] = s[i] - '0';
    }
    int save = num_digits-1;
    for (int i = num_digits - 1; i >= 0; i--)
    {
        if (a[i] >= 5)
        {
            save = i;
            a[i] = 0;
            a[i - 1] += 1;
        }
    }
    for (int i = 0; i < num_digits; i++)
    {
        if (i == 0 && a[i] == 0)
        {
            continue;
        }
        else
        {
            if(i > save)
            {
                cout << 0;
            }
            else{
                cout << a[i];
            }
        }
    }
    cout << endl;
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