#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

int first(vi arr, int low, int high, int x, int n)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    map<int, int> count;
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    int ans = 0, c0=0, c1=0;
    while(ans < n)
    {
        if(count[ans] == 0)
        {
            c0++;
        }
        if(count[ans] == 1){
            c1++;
        }
        if(c1 > 1 || c0 > 0)
        {
            break;
        }
        ans++;
       
    
    }
    cout << ans<< endl;
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