#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v;
    int num = 0;
    int l = 0;
    int swaps1 = 0, swaps2 = 0;
    int i;
    if (s.size() == 2)
    {
        if(k >=1)
        {
            if(s[0] == '1' )
            {
                swap(s[0], s[1]);
            }
             
        }
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                v.push_back(i);
            }
        }
        if (v.size() > 0)
        {
            swaps1 = n - 1 - v[v.size() - 1];
            swaps2 = v[0];
        }

        if (swaps1 <= k && swaps1 > 0)
        {
            swap(s[v[v.size() - 1]], s[n - 1]);
            k -= swaps1;
        }
        if (swaps2 <= k && swaps2 > 0)
        {
            if(v[0] != n-1)
           { swap(s[v[0]], s[0]);
            k -= swaps2;}
        }
    }
    int sum = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' && s[i + 1] == '1')
        {
            sum += 1;
        }
        else if (s[i] == '0' && s[i + 1] == '0')
        {
            sum += 0;
        }
        else if (s[i] == '1' && s[i + 1] == '1')
        {
            sum += 11;
        }
        else if (s[i] == '1' && s[i + 1] == '0')
        {
            sum += 10;
        }
    }
    cout << sum << endl;
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