#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<pair<long long int, long long int>> a;
        vector<pair<long long int, long long int>> b;
    
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(make_pair(tmp, (i+1)));
        }
        b.push_back(make_pair(0, 0));
        long long int ttime = 0;
        int j = 1;
        int k = 1;
        sort(a.begin(), a.end(),greater<pair<long long int,long long int>>());
        int i = 0;
        for (auto it = a.begin(); it != a.end(); it++)
        {
            b.push_back(make_pair((*it).second, (k)*j));
            ttime += (k * 2 * (*it).first);
            j *= -1;
            if ((i + 1) % 2 == 0)
                k++;
            i++;
        }

        cout << ttime << endl;
        sort(b.begin(), b.end(),[](const auto &lhs, const auto &rhs)
             { return lhs.first < rhs.first; });
        for (auto it = b.begin(); it != b.end(); it++)
        {
            cout << (*it).second << " ";
        }
        cout << endl;
    }
}