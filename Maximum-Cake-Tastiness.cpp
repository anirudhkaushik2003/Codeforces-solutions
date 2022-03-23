#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        vector<long long int> a;
        vector<long long int> b;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            long long int inp;
            cin >> inp;
            a.push_back(inp);
        }

        sort(a.begin(), a.end(), greater<long long int>());
        cout << a[0] + a[1] << endl;
    }
}