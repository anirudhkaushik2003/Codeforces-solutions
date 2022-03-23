#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int result = ((floor(cbrt(n)) - ceil(cbrt(1)) + 1)) + ((floor(sqrt(n)) - ceil(sqrt(1)) + 1)) - (floor(pow(n,(double)(1.0/6))) - ceil(1) + 1);
        cout << result << endl;
    }
}