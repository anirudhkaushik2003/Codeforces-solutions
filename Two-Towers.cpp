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
    int n1, n2;
    cin >> n1 >> n2;

    string s1, s2;
    cin >> s1;
    cin >> s2;


    string s3 = s1;
    string s4 = s2;

    reverse(s3.begin(), s3.end());
    reverse(s4.begin(), s4.end());

    s1 += s4;
    s2 += s3;

    int repeats = 0;
    for (int i  = 0; i < s1.length()-1; i++)
    {
        if(s1[i] == s1[i+1])
        {
            repeats++;
        }
    }
    if (repeats <= 1){
        cout << "YES" << endl;
        return;
    }
    repeats = 0;
    for (int i  = 0; i < s2.length()-1; i++)
    {
        if(s2[i] == s2[i+1])
        {
            repeats++;
        }
    }

    if (repeats <= 1){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
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