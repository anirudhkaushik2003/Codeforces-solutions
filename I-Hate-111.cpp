#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    long long int a[12];
    for (int i = 0; i < 12; i++)
    {
        if (i == 0)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = pow(10, i) + a[i - 1];
        }
    }
    while (t > 0)
    {
        long long int x, store, temp;
        cin >> x;
        temp = x;
        bool cond = false;
        int i = 11;
        while (x < a[i])
        {
            i--;
        }

        for (int j = i; j > 0; j--)
        {
            if (x % a[j] == 0)
            {
                cout << "YES" << endl;
                cond = true;
                break;
            }
        }
        if (cond == false)
        {
            int j = i;
            for (; j > 0; j--)
            {
                temp = x;
                for (i = j; i > 0; i--)
                {
                    store = temp / a[i];
                    temp = temp - (store * a[i]);
                    if (temp == 0)
                        break;
                }
                if (temp == 0)
                {
                    cout << "YES" << endl;
                    cond = true;
                    break;
                }
                else
                    cond = false;
            }
            if (cond == false)
            {
                int k = i;
                int j;
                for (j = 1; j <= k; j++)
                {
                    temp = x;
                    for (i = 1; i <= j; i++)
                    {
                        store = temp / a[i];
                        temp = temp - (store * a[i]);
                        if (temp == 0)
                            break;
                    }
                    if (temp == 0)
                    {
                        cout << "YES" << endl;
                        cond = true;
                        break;
                    }
                    else
                        cond = false;
                }
            }
            if (cond == false)
                cout << "NO" << endl;
        }

        t--;
    }
}