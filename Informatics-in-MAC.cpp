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
    
    for(auto &x : a)
    {
        cin >> x;
    }

    vi pre_mex(n); // pre_mex[i] = mex from 0 to i
    vi pos_mex(n); // pos_mex[i] = mex from i+1 to n

    int max = *max_element(a.begin(), a.end());
    vector<bool> b(max+1, false);

    int mex = 0;
    for (int i = 0; i < n; i++) {
        // Mark the current element as present
        b[a[i]] = true;
 
        // Update mex until a non-present value is found
        while (b[mex] == true) {
            mex++;
        }
 
        // Store the current mex value in the result vector
        pre_mex[i] = mex;
    }

    for(int i = 0; i <max+1;i++)
    {
        b[i] = false;
    }
    mex = 0;
    pos_mex[0] = pre_mex[0];
    for(int i = n-1; i >0;i--)
    {
        b[a[i]] = true;
 
        // Update mex until a non-present value is found
        while (b[mex] == true) {
            mex++;
        }
 
        // Store the current mex value in the result vector
        pos_mex[i] = mex;
    }

    for(int i = 0; i < n-1; i++)
    {
        if(pre_mex[i] == pos_mex[i+1])
        {
            cout << 2 << endl;
            cout << 1 << " " << i+1 << endl;
            cout << i+2 << " " << n << endl;
            return;
        }
    }
    cout << -1 << endl;

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