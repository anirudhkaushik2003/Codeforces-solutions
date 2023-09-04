#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define ll long long
bool isPrime(int x)
{
    for (int d = 2; d * d <= x; d++)
    {
        if (x % d == 0)
            return false;
    }
    return x >= 2;
}
void solve()
{
    string s;
    cin >> s;

    for (int j = 0; j < s.size() - 1; j++)
    {
        int start = s[j] - '0';
        start *= 10;
        for (int i = j+1; i < s.size(); i++)
        {
            int curr = s[i] - '0';
            if (isPrime(start + curr))
            {
                cout << start + curr << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}