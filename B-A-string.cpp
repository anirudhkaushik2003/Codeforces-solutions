#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, x;
        cin >> n >> k >> x;
        string s[n];
        string temp;
        cin >> temp;
        for (int i = 0; i < n; i++)
        {
            s[i] += temp[i];
        }
        string p;

        for (int i = 0; i <n; i++)
        {
            if (s[i] == "*")
            {

                s[i] = "b";
                for (int j = 0; j < k - 1; j++)
                {
                    s[i] += "b";
                }
            }
                p += s[i];

        }
        cout << p << endl;

        for( int i = 0;i<x;i++)
        {
            if(p[i] == 'b')
            {
                p.erase(p.begin() + i);
            }
        }
        
    }
}