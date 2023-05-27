#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>


int check_rbs(string s)
{
    int a, b = 0;
    for(int i =0;i<s.size();i++)
    {
        if(s[i] == '(')
        {
            a++;
        }
        else
        {
            b++;
        }
        if(b>a)
        {
            return 0;
        }
    }
    if(a==b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c1 = 0;
    int c2 = 0;

    if (n % 2 != 0)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            c1++;
        }
        else
            c2++;
    }
    if (c1 != c2)
    {
        cout << -1 << endl;
        return;
    }
    string rs = s;
    reverse(rs.begin(), rs.end());
    if(check_rbs(s) || check_rbs(rs))
    {
        cout << 1 << endl;
        while(n--)
        {
            cout << 1 << " ";
        }
    }
    else{
        cout << 2 << endl;
        
    }
    cout << endl;
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