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
    int n = 8;
    vector<int> a;
    int p[n][n] ;
    for (int i = 0; i < 8; i++)
    {
        int count=0;
        for (int j = 0; j < 8; j++)
        {
            
            char tmp;
            cin >> tmp;
            if (tmp == '#')
            {
                count++;
                p[i][j] = 1;
                // cout << i<<" "<<j<<endl;
            }
            else{
                p[i][j] = -1;
            }
        }
        a.pb(count);
        // cout << a[a.size() - 1] << endl;
    }
    for (int i = 0; i < 8; i++)
    {
        if (i > 0 && i < 8 && a[i] == 1)
        {
            if (a[i - 1] == 2 && a[i + 1] == 2)
            {
                for (int j = 0; j < 8; j++)
                {
                    if(p[i][j] != -1 )
                    {
                        cout << i+1 << " " << j+1 << endl;
                        return;
                    }
                }
            }
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