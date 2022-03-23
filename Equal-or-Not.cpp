#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n;
        n = s.size();
        int cond = 0;
        int a = 0;
        string result;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'E')
            {
                a = 1;
            }
            if (s[i] == 'N')
            {
                a = 0;
            }
        }
        if (s[0] == 'E')
        {
            if (a == 1)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            if (a == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        
        
    }
}
