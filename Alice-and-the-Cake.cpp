#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;

    long long int n;
    long long int inp;
    long long int b1;
    while (t--)
    {
        b1 = 0;
        multiset<long long int, greater<long long int>> a;
        multiset<long long int, greater<long long int>> b;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> inp;
            a.insert(inp);
            b1 += inp;
        }
        b.insert(b1);
        while (!b.empty())
        {
            long long int x = *b.begin();
            if (x < *a.begin())
            {
                break;
            }
            b.erase(b.begin());
            if (a.find(x) != a.end())
            {
                a.erase(a.find(x));
            }
            else
            {
                b.insert(x / 2);
                b.insert((x + 1) / 2);
            }
        }

        if (a.empty())
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }
}