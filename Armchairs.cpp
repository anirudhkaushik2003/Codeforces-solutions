#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int o = n / 2;
    int b[o];
    int c[n - o];
    int j = 0, k = 0;
    int count = 0, cond, temp, temp2, store, store2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cond = 0;
        if (a[i] == 1)
        {
            for (int j = i; j >= 0; j--)
            {
                if (a[j] == 0)
                {
                    a[j] = 2;
                    temp = abs((i - j));
                    store = j;

                    break;
                }
            }

            for (int j = i; j < n; j++)
            {
                if (a[j] == 0)
                {
                    a[j] = 2;
                    temp2 = abs((i - j));
                    store2 = j;
                    break;
                }
            }
            if (temp > temp2)
            {
                count += temp2;
                if (a[store] == 2)
                    a[store] = 0;
            }

            else
            {
                count += temp;
                if (a[store2] == 2)
                    a[store2] = 0;
            }
        }
    }
    cout << count << "\n";
}