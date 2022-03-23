#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a[n - 2];
        char result[n + 1];
        int cond = 0;
        int j = 0;
        for (int i = 0; i < n - 2; i++)
        {
            cin >> a[i];
            if (i > 0 && cond != 1)
            {
                if (a[i][0] != a[i - 1][1])
                {
                    cond = 1;
                    result[j] = a[i - 1][1];
                    j++;
                }
            }
            result[j] = a[i][0];
            j++;
        }
        result[j] = a[n - 3][1];

        j++;
        if (cond != 1)
        {
            result[j] = 'a';
        }
        result[n] = '\0';
        cout << result << endl;
    }
}