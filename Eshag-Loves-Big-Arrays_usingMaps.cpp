#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> a;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        a[temp]++;
    }
    //sort(a.begin(), a.end());
    auto i = a.begin();
    cout << (n - (*i).second) << endl;
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