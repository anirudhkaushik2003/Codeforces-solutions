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
    for (auto &x : a)
        cin >> x;

    priority_queue<int, vi, less_equal<int>> max_len;
    int cur_len = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            cur_len++;
        }
        else
        {
            max_len.push(cur_len);
            cur_len = 1;
        }
    }
    max_len.push(cur_len);

    cout << max_len.top() << endl;
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