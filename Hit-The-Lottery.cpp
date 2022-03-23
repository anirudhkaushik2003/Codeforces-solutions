#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, m = 0, temp;
    cin >> n;
    while (n != 0)
    {
        if (n < 100)
            break;
        temp = n / 100;
        m += temp;
        n = n - (temp * 100);
    }
    while (n != 0)
    {
        if (n < 20)
            break;
        temp = n / 20;
        m += temp;
        n = n - (temp * 20);
    }
    while (n != 0)
    {
        if (n < 10)
            break;
        temp = n / 10;
        m += temp;
        n = n - (temp * 10);
    }
    while (n != 0)
    {
        if (n < 5)
            break;
        temp = n / 5;
        m += temp;
        n = n - (temp * 5);
    }
    while (n != 0)
    {
        temp = n / 1;
        m += temp;
        n = n - temp;
    }
    cout << m << endl;
}

int main()
{

    solve();
}