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

    int n_gp = 0;
    int n_gen = 0;
    int count = 0;
    for (auto &x : a)
    {
        cin >> x;
        if(x == 1)
        {
            n_gp++;
            if (n_gen > 0)
                count = max(count, (n_gen/2)+1+(n_gp-n_gen));
            else
                count = max(count, n_gp);
        }
        else
        {
            n_gen = n_gp;
            if(n_gen > 0)
                count = max(count, (n_gen/2)+1);
        }
    }

    cout << count << endl;
    return;

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