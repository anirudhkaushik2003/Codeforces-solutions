#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = s.size();
    for (int i = 0; i < l; i++)
    {
        if(i >= (l-i-1))
        {
            cout << s << endl;
            return;
        }
        if ((n & 1) == 0)
        {
            if (s[i] > s[l - i-1])
            {
                string temp = s;
                reverse(temp.begin(), temp.end());
                s = temp + s;
                cout << s << endl;
                return;
            }
            else if (s[i] < s[l - i-1])
            {
                cout << s << endl;
                return;
            }
        }
        else
        {
            string temp = s;
            reverse(temp.begin(), temp.end());
            if (s[i] > s[l - i-1])
            {

                cout << temp << endl;
                return;
            }
            else if (s[i] < s[l - i-1])
            {
                cout << s << temp << endl;
                return;
            }
        }
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