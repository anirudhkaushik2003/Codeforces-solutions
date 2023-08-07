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
    int a[2][n];
    a[0][0] = 2*n;
    a[1][n-1] = 2*n - 1;
    int j = 2;
    for (int i = 1; i < n; i+=2)
    {
        a[0][i] = j;
        a[1][i-1] = j-1;
        j += 2;
    }
    j = 2*n-2;
    for(int i = 2; i< n; i+=2)
    {
        a[0][i] = j;
        a[1][i-1] = j-1;
        j -= 2;
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
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