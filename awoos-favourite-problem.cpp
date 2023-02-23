#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n;
    cin >> n;
    string s;
    string a;
    string t;
    string b;
    cin >> s;
    cin >> t;

    if (s == t)
    {
        cout << "YES" << endl;
        return;
    }
    a = s;
    b = t;
    a.erase(remove(a.begin(), a.end(), 'b'), a.end());
    b.erase(remove(b.begin(), b.end(), 'b'), b.end());
    if (a != b)
    {
        cout << "NO" << endl;
        return;
    }
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b')
            continue;
        while (t[j] == 'b')
            j++;
        if (s[i] != t[j] || (s[i] == 'a' && i > j) || (s[i] == 'c' && i < j))
        {
            cout << "NO" << endl;
            return;
        }
        j++;
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}