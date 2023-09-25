#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

#define mod 998244353

using namespace std;

int calculateXORSum(vector<int>& a) {
    int n = a.size();
    int result = 0;
    int xor_value = 0;
    int xor_count = 0;

    for (int i = 0; i < n; ++i) {
        xor_value ^= a[i];
        int subarray_count = i + 1;
        int total_count = n - i;
        int odd_count = total_count % 2;
        int even_count = total_count - odd_count;

        if (subarray_count % 2 == 1) {
            xor_count += odd_count;
            result ^= xor_value;
        } else {
            xor_count += even_count;
        }
    }

    if (xor_count % 2 == 0) {
        return 0; // The result is 0 if the total number of XOR operations is even.
    }

    return result;
}


void solve()
{
    int n;
    cin >> n;
    vi a(n);
    for(auto &x: a) cin >> x;

    ll ans = calculateXORSum(a);
    ans = (ans%mod);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    solve();
}