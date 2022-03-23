#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, s;
        cin >> a >> s;
        int result[s.size()];
        int j = a.size() - 1;
        int k = s.size() - 1;
        int i = s.size() - 1;
        deque<int> q;
        for (; i > -1 && j > -1 && k > -1;)
        {
            if (a[j] <= s[i])
            {
                result[k] = (s[i] - '0') - (a[j] - '0');
                q.push_front(result[k]);
                j--;
                k--;
                i--;
            }
            else
            {
                result[k] = (s[i - 1] - '0') * 10 + (s[i] - '0') - (a[j] - '0');
                q.push_front(result[k]);
                i -= 2;
                j--;
                k--;
            }
        }
        for (; i > -1; i--)
        {
            q.push_front((s[i] - '0'));
        }
        i = 0;
        long long int res = 0;
        int ten = q.size() - 1;
        while (!q.empty())
        {
            if (q.front() == 0)
            {
            }
            else
            {
                i += 1;
            }
            if (i > 0)
            {
                //cout << q.front();
                res += q.front() * pow(10, ten);
            }
            q.pop_front();
            ten--;
        }
        if (j > -1 || res < 0 || ( a[a.size()-1] ))
        {
            cout << -1 << endl;
        }
        else
            cout << res << endl;
    }
}