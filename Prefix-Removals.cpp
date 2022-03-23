#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        stack<char> b;
        map <char, int> occurences;
        for(int i = 0; i< a.length();i++)
        {
            occurences[a[i]]++;
        }
        int i;
        for (i = 0; i < a.length(); i++)
        {
            if (occurences[a[i]] > 1)
            {
                occurences[a[i]]--;
            }
            else break;
        }
        cout << a.substr(i) << endl;
    }
}