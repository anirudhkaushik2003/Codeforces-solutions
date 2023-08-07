#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

ll lower_bound(vll arr, ll N)
{
    ll mid;
 
    // Initialise starting index and
    // ending index
    ll low = 0;
    ll high = N;
 
    // Till low is less than high
    while (low < high) {
        mid = low + (high - low) / 2;
 
        // If X is less than or equal
        // to arr[mid], then find in
        // left subarray
        if ((float(arr[mid] / ((N - mid + 1)*1.0)) >= 1.0)) {
            high = mid;
        }
 
        // If X is greater arr[mid]
        // then find in right subarray
        else {
            low = mid + 1;
        }
    }
   

    // Return the lower_bound index
    return low;
}

void solve()
{
    int n;
    cin >> n;
    vll a(n);
    for (auto &x : a)
        cin >> x;
    for (ll k = 1; k < n + 1; k++)
    {

        ll mid;
 
        // Initialise starting index and
        // ending index
        ll low = 0;
        ll high = k-1;
    
        // Till low is less than high
        while (low < high) {
            mid = low + (high - low) / 2;
    
            // If X is less than or equal
            // to arr[mid], then find in
            // left subarray
            if ((float(a[mid] / ((k - mid)*1.0)) >= 1.0)) {
                high = mid;
            }
    
            // If X is greater arr[mid]
            // then find in right subarray
            else {
                low = mid + 1;
            }
        }
        low += 1;
        if(float(a[low]/ ((k-low)*1.0)) >= 1.0 ) low -= 1;
        if (k == low)
            cout << 1 << " ";
        else
        {
            cout << k - low << " ";
        }
    }
    cout << endl;
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