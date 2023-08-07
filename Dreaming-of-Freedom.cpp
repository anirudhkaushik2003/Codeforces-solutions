#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

#define MAX 1000001
vector<bool> is_prime(MAX, true);

void solve()
{
    int n, m;
    cin >> n >> m;

    int d = n;
    if (is_prime[n])
    {
    }
    // if divisible by 2
    else
    {
        if (n % 2 == 0)
            d = 2;
        else

        // iterate from 3 to sqrt(n)
        {
            for (int i = 3; i * i <= n; i += 2)
            {
                if (is_prime[i] && n % i == 0)
                {
                    d = i;
                    break;
                }
            }
        }
    }
    if (d < 2)
    {
        cout << "yes" << endl;
        return;
    }
    if (d > m)
        cout << "yes" << endl;
    else
    {
        cout << "no" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= MAX - 1; i++)
    {
        if (is_prime[i] && (long long)i * i <= MAX - 1)
        {
            for (int j = i * i; j <= MAX - 1; j += i)
                is_prime[j] = false;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}