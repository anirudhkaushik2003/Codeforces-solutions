#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int n = 10;
    vector<int> sum(n + 1);
    for(int i = 0; i<n;++i)
    {
        sum[i + 1] = sum[i] + i;
        cout << sum[i+1] << endl;
    }
}