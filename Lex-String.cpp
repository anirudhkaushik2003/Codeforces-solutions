#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    string a, b;
    cin >> a;
    cin >> b;
    vector<int> p(n), q(m);
    vector<int> c, d;
    for (int i = 0; i < n; i++)
    {
        p[i] = a[i] - 'a';
    }
    for (int i = 0; i < m; i++)
    {
        q[i] = b[i] - 'a';
    }
    sort(p.begin(), p.end());
    sort(q.begin(), q.end());
    int x, y;
    x = n;
    y = m;
    int cond = 0;
    int j = 0;
    int l = 0, i = 0;
    int i_op = 0, j_op = 0;
    while (i < n && j < m)
    {
        for (; i_op < k && j_op < k && i < n && j < m;)
        {
            if (p[i] < q[j])
            {
                c.push_back(p[i]);
                i_op++;
                i++;
                j_op = 0;
            }
            else
            {
                c.push_back(q[j]);
                j++;
                i_op = 0;
                j_op++;
            }
        }
        if (i >= n || j >= m)
        {
            break;
        }
        if (i_op == k && j < m && i < n)
        {
            i_op = 0;
            c.push_back(q[j]);
            j++;
            j_op++;
            
        }
        if (i >= n || j >= m)
        {
            break;
        }
        if (j_op == k && i < n && j < m)
        {
            c.push_back(p[i]);
            j_op = 0;
            i++;
            i_op++;

        }
        // if(j_op == k) j_op = 0;
        // if(i_op == k) i_op = 0;
        if (i >= n || j >= m)
        {
            break;
        }
    }

    for (i = 0; i < c.size(); i++)
    {
        char temp = c[i] + 'a';
        cout << temp;
    }
    cout << endl;
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