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
    string s1, s2;
    cin >> s1;
    cin >> s2;

    vector<string> s;
    s.pb(s1);
    s.pb(s2);

    queue<pii> unblock;
    int n = s1.size();
    int t, q;
    cin >> t >> q;

    int bad = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[0][i] != s[1][i])
            bad++;
    }
    for (int l = 0; l < q; l++)
    {
        while (!unblock.empty() && unblock.front().first == l)
        {
            if (s[0][unblock.front().second] != s[1][unblock.front().second])
            {
                bad++;
            }
            unblock.pop();
        }
        int type;
        cin >> type;
        if (type == 1)
        {
            int ind;
            cin >> ind;
            ind--;
            unblock.emplace(l + t, ind);
            if (s[0][ind] != s[1][ind])
            {
                bad--;
            }
        }
        else if (type == 2)
        {
            int a;
            int i;
            int b;
            int j;

            cin >> a >> i >> b >> j;
            a--;
            b--;
            i--;
            j--;

            if (s[a][i] != s[1 ^ a][i])
            {
                --bad;
            }
            if (s[b][j] != s[1 ^ b][j])
            {
                --bad;
            }

            swap(s[a][i], s[b][j]);
            if (s[a][i] != s[1 ^ a][i])
            {
                ++bad;
            }
            if (s[b][j] != s[1 ^ b][j])
            {
                ++bad;
            }
        }
        else
        {
            if (bad == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
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