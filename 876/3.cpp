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
    for(auto &x:a) cin>>x;

    if(n ==1)
    {
        if(a[0] == 0)
        {
            cout << "YES" << endl;
            cout <<0 << endl;
            return;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    bool cond = false;
    for(int i =0; i < n; i++)
    {
        if(a[i] == 1 )
        {
            cond = true;
            while(i < n)
            {
                if(a[i] == 0)
                {
                    cond = false;
                    break;
                }
                i++;
            }
            if(cond)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    // cout << 0 << " ";
    int zeros = 0;
    int ones = 0;
    for(int i =n-1; i >=0; i--)
    {
        if(a[i] == 0)
        {
            zeros++;
        }
        if(a[i] == 1)
        {
            while(a[i] == 1)
            {
                ones++;
                i--;
            }
            for(int j = 0;j<zeros-1;j++)
            {
                cout << 0 << " ";
            }
            for(int j = 0; j < ones; j++)
            {
                cout << 0 << " ";
            }
            cout << ones << " ";
            zeros = 0;
            ones = 0;
            i++;
        }

    }
    while(zeros--)
    {
        cout << 0 << " ";
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