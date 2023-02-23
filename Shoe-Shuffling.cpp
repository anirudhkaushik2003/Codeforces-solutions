#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<vector<int>> c;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = -1;
    for (int i = 0; i < n;)
    {
        c.push_back(vector<int>());
        k++;
        c[k].push_back(i);
        int count = 0;
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                c[k].push_back(j);
                count++;
            }
            else
                break;
        }

        if (count == 0)
        {
            cout << -1 << endl;
            return;
        }
        i = j;
    }
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i][c[i].size() - 1] + 1 << " ";

        for (int j = 0; j < c[i].size() - 1; j++)
        {
            cout << c[i][j] + 1 << " ";
        }
    }
    cout << endl;
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