#include <bits/stdc++.h>
using namespace std;

int msb(long long int n)
{
    int msb_p = -1;
    while (n)
    {
        n = n>>1;
        msb_p++;
    }
    return msb_p;
}
int main()
{
    int t, j;
    long long int n, i, k,msbk;
    long long int *a;
    

    cin >> t;
    while (t > 0)
    {

        cin >> n;
        msbk = msb(n);

        k = (1 << msbk);
        k-=1;
        
        cout << k << "\n";

        t--;
    }
}