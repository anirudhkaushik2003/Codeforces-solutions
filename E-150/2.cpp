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
    int q;
    cin >> q;
    vi a;
    int size = 0;
    vector<int> arr;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        arr.pb(x);
    }
    a.pb(arr[0]);
    size++;
    int max_e = arr[0];
    int cond = 0;
    cout << "1";
    for (int i = 1; i < q; i++)
    {

        if (cond == 0 && arr[i] >= a[size - 1])
        {
            // cout << arr[i] << " " << a[size - 1] << endl;
            a.pb(arr[i]);
            size++;
            cout << "1";
        }
        else if (arr[i] <= max_e)
        {
            if (cond == 0)

            {
                cond = 1;
                // cout << arr[i] << " " << a[0] << endl;
                a.push_back(arr[i]);
                cout << "1";
                size++;
            }
            else if (arr[i] >= a[size - 1])
            {
                // cout << arr[i] << " " << a[size - 1] << endl;
                a.pb(arr[i]);
                size++;
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        else
        {
            cout << "0";
        }
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