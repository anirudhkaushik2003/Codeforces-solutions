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
    ll n;
    cin >> n;
    vector<ll> pos_a(n + 1);
    vector<ll> pos_b(n + 1);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pos_a[x] = i+1;
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pos_b[x] = i+1;
    }

    ll la = n, ra = 1, lb = n, rb=1, ans = 0;
    for(int i = 1 ; i < n ; i++)
    {
        la = min(la, pos_a[i]); // pos_a[i]
        ra = max(ra, pos_a[i]); // pos_a[i]
        lb = min(lb, pos_b[i]); // pos_b[i]
        rb = max(rb, pos_b[i]); // pos_b[i]

        ll min_la, max_ra, min_lb, max_rb;

        if(pos_a[i+1] < la)
        {
            min_la = pos_a[i+1] + 1;
            max_ra = n;
        }
        else{
            min_la = 1;
            max_ra = pos_a[i+1] - 1;
        }
        if(pos_b[i+1] < lb)
        {
            min_lb = pos_b[i+1]+1;
            max_rb = n;
        }
        else{
            min_lb = 1;
            max_rb = pos_b[i+1] - 1;
        }
        ans += max(min(la,lb) - max(min_la, min_lb) + 1, 0ll) * max(min(max_ra, max_rb) - max(ra, rb) + 1, 0ll); // number of subsegments having MEX = 1 common to both

    }
    ans += min(pos_a[1], pos_b[1]) * (min(pos_a[1],pos_b[1])-1)/2; // all subsegments from 1 to pos[1] missing 1
    ans += (n-max(pos_a[1], pos_b[1]))*((n-max(pos_a[1], pos_b[1]))+1)/2; // all subsegments from pos[1] to n missing 1
    ans += abs(pos_a[1]-pos_b[1]) * (abs(pos_a[1]-pos_b[1])-1)/2; // all subsegments between the pos[1] in the two arrays
    ans++; // subsegment from 1 to n missing n+1
    cout << ans << endl;
    return;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
}