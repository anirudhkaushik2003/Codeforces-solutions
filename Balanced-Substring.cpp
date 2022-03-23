#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    int len;
    int l, r;
    while (t--)
    {
        l = -1;
        r = -1;
        cin >> len;
        cin >> s;

        if (len <= 1)
        {
            cout << l << " " << r << endl;
        }
        else
        {
            for (int i = 0; i < len; i++)
            {
                if (s[i] == 'a')
                {
                    if (i < len - 1 && s[i + 1] == 'b')
                    {
                        l = i+1;
                        r = i + 2;
                        break;
                    }
                }
                if (s[i] == 'b')
                {
                    if (i < len - 1 && s[i + 1] == 'a')
                    {
                        l = i+1;
                        r = i + 2;
                        break;
                    }
                }
            }
            cout << l << " " << r << endl;
        }
    }
}