#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;

    while (t > 0)
    {
        cin >> a >> b;
        int n = a + b;

        char s[n + 1];
        cin >> s;
        int value = 0, p = 1;

        bool a_odd = false, b_odd = false, n_odd = false;
        if (a % 2 != 0)
        {
            a_odd = true;
        }
        if (b % 2 != 0)
        {
            b_odd = true;
        }
        if (n % 2 != 0)
        {
            n_odd = true;
        }
        int i;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '0')
                a--;
            if (s[i] == '1')
                b--;
            if (a < 0 || b < 0)
            {
                value = -1;
                break;
            }
        }
        if (value != -1)
        {
            for (i = 0; i < n / 2; i++)
            {
                if (s[i] != s[n - 1 - i])
                {
                    if (s[i] == '?')
                    {
                        s[i] = s[n - 1 - i];
                        if (s[n - i - 1] == '0')
                        {
                            p = -1;
                            a -= 1;
                        }
                        else
                        {
                            p = 1;
                            b -= 1;
                        }
                    }
                    else
                    {
                        if (s[n - i - 1] == '?')
                        {
                            s[n - i - 1] = s[i];
                            if (s[n - i - 1] == '0')
                            {
                                p = -1;
                                a -= 1;
                            }
                            else
                            {
                                p = 1;
                                b -= 1;
                            }
                        }
                        else
                            value = -1;
                    }
                }
                else
                {
                    if (s[i] == '?')
                    {
                        if (a > 1)
                        {
                            p *= -1;
                            s[i] = '0';
                            s[n - i - 1] = '0';
                            a -= 2;
                        }
                        else
                        {
                            if (b > 1)
                            {
                                if (a != 0)
                                    p *= -1;
                                s[i] = '1';
                                s[n - i - 1] = '1';
                                b -= 2;
                            }
                            else
                                value = -1;
                        }
                    }
                }
            }
        }
        if (n_odd == true)
        {
            if (a_odd && a > 0 && s[i] == '?')
                s[i] = '0';
            else
            {
                if (b_odd && b > 0 && s[i] == '?')
                {
                    s[i] = '1';
                }
                else
                {
                    if (s[i] == '?')
                        value = -1;
                }
            }
        }
        if (value != -1)
            cout << s << "\n";
        else
            cout << value << "\n";
        //cout << s << "\n";
        t--;
    }
}