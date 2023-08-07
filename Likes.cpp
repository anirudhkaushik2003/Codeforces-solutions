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
    vi a(n);
    for (auto &x : a)
        cin >> x;

    sort(a.begin(), a.end(), greater<int>());
    int count = 0, pos = 0, neg = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
            pos++;
        }
        else
        {
            count--;
            neg++;
        }
        cout << count << " ";
    }
    cout << endl;
    count = 0;
    int  i = 0;
    for (i = 0; ; i++)
    {
        if (count == 0 && pos > 0)
        {
            cout << 1 << " ";
            pos--;
            count = 1;
        }
        else if (count == 1 && neg > 0)
        {
            cout << 0 << " ";
            neg--;
            count = 0;
        }
        if(neg == 0)
             break;
    }
    int x = 1+count;
    while(pos--)
    {
        cout << x << " ";
        x++;
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