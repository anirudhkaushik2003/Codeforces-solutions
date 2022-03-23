#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long int n;
        int zero_count = 0;

        cin >> n;
        char s[n + 1];
        scanf("%s", s);
        for (int i = 0; i < n + 1; i++)
        {
            if (s[i] == '0')
            {
                zero_count++;
            }
        }
        if (zero_count % 2 == 0 || zero_count < 2)
        {
            printf("BOB\n");
        }
        else
        {
            printf("ALICE");
        }
        t--;
    }
}