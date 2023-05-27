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
    vector <string> s(2*n-2);
    for (auto &x : s)
        cin >> x;

    string s1, s2;
    int done = 0;
    for(int i = 0; i < 2*n - 2; i++){
        if(s[i].size() == n-1)
        {
            if (done == 0){
                s1 = s[i];
                done = 1   ;
            }
            else{
                s2 = s[i];
                break;
            }
           
        }
    }
    reverse(s1.begin(), s1.end());
    if( s1 == s2)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
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