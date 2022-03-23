#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int k;
    while (t > 0)
    {

        cin >> k;
        int a, b, gcd;
        a = k;
        b = 100;
        for (int i = 1; i <= 100; i++)
        {
            if (a % i == 0 && b % i == 0)
                gcd = i;
        }
        b = b / gcd;
        cout << b << "\n";
        t--;
    }
}