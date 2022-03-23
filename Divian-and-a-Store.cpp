#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, l, r, k;
        cin >> n >> l >> r >> k;
        vector<long> a(0, n);
        for (int i = 0; i < n; i++)
        {
            long tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        int count = 0;
        int total = 0;
        for (auto it = a.begin(); it != a.end(); it++)
        {
            if ((*it) >= l && (*it) <= r && (total + (*it)) <= k)
            {
                count++;
                total += (*it);
            }
            if (total > k)
                break;
        }
        cout << count << endl;
    }
}