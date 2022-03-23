#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll inp = 0;
        int turn;
        if (n % 3 == 1)
            turn = 1;
        else
            turn = -1;
        while (inp != n)
        {
            if (turn == 1)
            {
                inp += 1;
                cout << 1;
            }
            else
            {
                inp += 2;
                cout << 2;
            }
            turn *= -1;
        }
        cout << endl;
    }
}