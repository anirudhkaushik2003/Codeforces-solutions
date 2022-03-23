#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int asize = sizeof(a) / sizeof(a[0]);
    bool count_array[1001];
    for (int i = 0; i < 1001; i++)
    {
        count_array[i] = false;
    }
    bool req = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        if (a[i] < 0)
            req = false;
        if (a[i] > 0)
            count_array[a[i]] = true;
    }
    sort(a.begin(), a.end());
    int x, count = n;
    bool cond;
    if (req == true)
    {
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count; j++)
            {
                x = abs(a[i] - a[j]);
                if (x != 0)
                {

                    if (count_array[x] == false)
                    {
                        cond = binary_search(a.begin(), a.end(), x);
                        if (cond == true)
                        {
                            count_array[x] = true;
                        }
                        else
                        {
                            count++;
                            a.push_back(x);
                            sort(a.begin(), a.end());
                            count_array[x] = true;
                        }
                    }
                }
            }
        }

        if (count > 300)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << count << endl;
            for (int i = 0; i < (count); i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "NO" << endl;
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