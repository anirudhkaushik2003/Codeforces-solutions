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
    // max(a1,a2,…,al−1,ar+1,ar+2,…,an)−min(a1,a2,…,al−1,ar+1,ar+2,…,an)+max(al,…,ar)−min(al,…,ar).

    int n;
    cin >> n;
    vll a(n);
    int max_ind = 0;
    ll max = 0;
    ll sum = 0;
    ll min_ind = 0;
    ll min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (max <= a[i])
        {
            max = a[i];
            max_ind = i;
        }
        if (min >= a[i])
        {
            min = a[i];
            min_ind = i;
        }
    }
    ll max2 = 0, max_ind2= 0;
    ll min2 = INT_MAX, min_ind2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != max_ind && i != min_ind)
        {
            if (max2 <= a[i])
            {
                max2 = a[i];
            }
            if (min2 >= a[i])
            {
                min2 = a[i];
            }
        }
    }
    sum = max - min + max2 - min2;
    cout << sum << endl;
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