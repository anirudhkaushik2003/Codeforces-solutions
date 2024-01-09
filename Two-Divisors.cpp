#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : a;
}

long lcm(int a, int b)
{
    return (long)a / gcd(a, b) * (long)b;
}

void solve()
{
    int a, b;
    cin >> a >> b;

    if (b % a == 0)
    {
        cout << (long) b*(b/a) << endl;
    }
    else
    {
        cout << lcm(a,b) << endl;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}