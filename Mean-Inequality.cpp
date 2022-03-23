#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        long long int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + (2 * n));
        if (abs(a[0] - a[2 * n - 1]) == abs(a[0] - a[1]))
        {
            long long int temp = a[0];
            a[0] = a[2 * n - 1];
            a[2 * n - 1] = temp;
        }
        if (abs(a[0] - a[2 * n - 1]) == abs(a[2 * n - 1] - a[2 * n - 2]))
        {
            long long int temp = a[2 * n - 1];
            a[2 * n - 1] = a[2 * n - 2];
            a[2 * n - 2] = temp;
        }
        for (int i = 1; i < 2 * n - 1; i++)
        {
            if ((a[i] - a[i - 1]) == (a[i + 1] - a[i]))
            {
                long long int temp;
                temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
            }
        }
        if (abs(a[0] - a[2 * n - 1]) == abs(a[0] - a[1]))
        {
            long long int temp = a[0];
            a[0] = a[2 * n - 1];
            a[2 * n - 1] = temp;
        }
        if (abs(a[0] - a[2 * n - 1]) == abs(a[2 * n - 1] - a[2 * n - 2]))
        {
            long long int temp = a[2 * n - 1];
            a[2 * n - 1] = a[2 * n - 2];
            a[2 * n - 2] = temp;
        }
        for (int i = 1; i < 2 * n - 1; i++)
        {
            if ((a[i] - a[i - 1]) == (a[i + 1] - a[i]))
            {
                long long int temp;
                temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
            }
        }
        if (abs(a[0] - a[2 * n - 1]) == abs(a[0] - a[1]))
        {
            long long int temp = a[0];
            a[0] = a[2 * n - 1];
            a[2 * n - 1] = temp;
        }
        if (abs(a[0] - a[2 * n - 1]) == abs(a[2 * n - 1] - a[2 * n - 2]))
        {
            long long int temp = a[2 * n - 1];
            a[2 * n - 1] = a[2 * n - 2];
            a[2 * n - 2] = temp;
        }
        for (int i = 1; i < 2 * n - 1; i++)
        {
            if ((a[i] - a[i - 1]) == (a[i + 1] - a[i]))
            {
                long long int temp;
                temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
            }
        }
        if (abs(a[0] - a[2 * n - 1]) == abs(a[0] - a[1]))
        {
            long long int temp = a[0];
            a[0] = a[2 * n - 1];
            a[2 * n - 1] = temp;
        }
        if (abs(a[0] - a[2 * n - 1]) == abs(a[2 * n - 1] - a[2 * n - 2]))
        {
            long long int temp = a[2 * n - 1];
            a[2 * n - 1] = a[2 * n - 2];
            a[2 * n - 2] = temp;
        }
        for (int i = 1; i < 2 * n - 1; i++)
        {
            if ((a[i] - a[i - 1]) == (a[i + 1] - a[i]))
            {
                long long int temp;
                temp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = temp;
            }
        }
        
        for (int i = 0; i < 2 * n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        t--;
    }
}