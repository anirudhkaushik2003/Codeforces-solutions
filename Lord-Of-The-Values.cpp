#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long long int a[n + 1], b[n + 1];
    long long int temp;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b + 1, b + n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        if (a[2 * temp] > 0)
        {
            cout << "1" << 2 * temp << a[2 * temp];
        }
        else
        {
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }
}