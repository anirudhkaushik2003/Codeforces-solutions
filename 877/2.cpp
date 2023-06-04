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
    int ind1 = 0;
    int indn = 0;
    vi ind(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ind[a[i]] = i + 1;
        if (a[i] == 1)
            ind1 = i;
        if (a[i] == n)
            indn = i;
    }
    // if (ind1 > indn)
    // {
    //     bool perm = false;
    //     sort(a.begin() + indn + 1, a.end());
    //     for (int i = indn + 1; i < n; i++)
    //     {
    //         if (a[i] != a[i + 1] - 1)
    //         {
    //             perm = false;
    //             break;
    //         }
    //     }
    //     if (perm)
    //     {
    //         cout << indn + 1 << " " << ind[2] << endl;
    //     }
    //     else
    //     {
    //         cout << indn + 1 << " " << indn + 1 << endl;
    //         return;
    //     }
    // }
    // else{
    //     bool perm = false;
    //     sort(a.begin(), a.begin() + ind1);
    //     for (int i = 0; i < ind1; i++)
    //     {
    //         if (a[i] != a[i + 1] - 1)
    //         {
    //             perm = false;
    //             break;
    //         }
    //     }
    //     if (perm)
    //     {
    //         cout << ind1 + 1 << " " << ind[n - 1] << endl;
    //     }
    //     else
    //     {
    //         cout << ind1 + 1 << " " << ind1 + 1 << endl;
    //         return;
    //     }
    // }

    // insert n between these two by swapping
    cout << ind[n] << " ";
    if (ind[1] < ind[2] && ind[2] < ind[n])
    {
        cout << ind[2] << endl;
        return;
    }
    if (ind[1] > ind[2] && ind[1] < ind[n])
    {
        cout << ind[1] << endl;
        return;
    }
    if (ind[2] < ind[1] && ind[2] > ind[n])
    {
        cout << ind[2] << endl;
        return;
    }
    if (ind[1] < ind[2] && ind[1] > ind[n])
    {
        cout << ind[1] << endl;
        return;
    }
    cout << ind[n] << endl;
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