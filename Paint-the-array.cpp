#include <bits/stdc++.h>
using namespace std;
void printDivisors(int n)
{
    // Vector to store half of the divisors
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {

            // check if divisors are equal
            if (n / i == i)
                printf("%d ", i);
            else
            {
                printf("%d ", i);

                // push the second divisor in the vector
                v.push_back(n / i);
            }
        }
    }

    // The vector will be printed in reverse
    for (int i = v.size() - 1; i >= 0; i--)
        printf("%d ", v[i]);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
}