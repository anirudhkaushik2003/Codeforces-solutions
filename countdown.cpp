#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    string s;
    int temp;
    int count = 0;
    char tm;
    while (t--)
    {
        count = 0;
        cin >> n;
        cin >> s;
        vector<int> a(10, 0);
        string d;
        for (int i = 0; i < s.length(); i++)
        {
            a[s[i] - '0']++;
        }

        int b = 0;
        int k = 0;
        int c = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < a[i]; j++, k++)
            {
                b += i * pow(10, n - k - 1);
                d[k] = i + '0';
            }
        }

        int swap = 0;
        for (int i = 0; i < n; i++)
        {

            if (s[i] != d[i])
                swap++;
        }
        count += swap / 2;
        count += b;
        cout << count << endl;
    }
}