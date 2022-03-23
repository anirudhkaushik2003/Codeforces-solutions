#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int w, h;
        cin >> w >> h;
        long long int k1, k2, k3, k4;
        cin >> k1;
        vector<long long int> a;
        long long int temp;
        for (long long int i = 0; i < k1; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        cin >> k2;
        vector<long long int> b;
        for (long long int i = 0; i < k2; i++)
        {
            cin >> temp;
            b.push_back(temp);
        }
        cin >> k3;
        vector<long long int> c;
        for (long long int i = 0; i < k3; i++)
        {
            cin >> temp;
            c.push_back(temp);
        }
        cin >> k4;
        vector<long long int> d;
        for (long long int i = 0; i < k4; i++)
        {
            cin >> temp;
            d.push_back(temp);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        long long int max1, max2, max3, max4;
        max1 = abs(a[0] - a[k1 - 1]) * h;
        max2 = abs(b[0] - b[k2 - 1]) * h;
        max3 = abs(c[0] - c[k3 - 1]) * w;
        max4 = abs(d[0] - d[k4 - 1]) * w;
        long long int max = max1;
        int num = 1;
        if (max2 > max)
        {
            num = 2;
            max = max2;
        }
        if (max < max3)
        {
            max = max3;
            num = 3;
        }
        if (max < max4)
        {
            num = 4;
            max = max4;
        }
        cout << max << endl;
    }
}