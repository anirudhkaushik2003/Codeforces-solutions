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

    vll a(n);
    for(auto &x: a)
    {
        cin >> x;
        
    }


    sort(a.begin(), a.end());
    ll min_elem = a[0];
    if(min_elem <= 0)
    {
        int index = lower_bound(a.begin(), a.end(), 0) - a.begin();
        if(a[index] == 0)
        {
            cout << 0 << endl;
        }
        else {
            if(index & 1) // if odd then sum is negative
            {
                cout << 0 << endl;

            }
            else{
                cout << 1 << endl;
                cout << 1 << " " << 0 << endl;
            }
        }

    }
    else{
        cout << 1 << endl;
        cout << 1 << " " << 0 << endl;
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
