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

    vi a(n);
    for (auto &x : a)
        cin >> x;

    vector<string> ans;
    // rotate

    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            // stringstream b2;
            // copy(a.begin(), a.end(), ostream_iterator<int>(b2, ""));

            // string b = b2.str();
            vi b = a;
            reverse(b.begin() + i, b.begin() + j+1);
            string c = b[slice(i, j - i + 1)];
            // cout << c << " " << i << " " << j << endl;
            // cout << b << endl;
            if (j == n - 1)
            {
                if (i == 0)
                {
                }
                else
                {
                    c = c + b[slice(0, i + 1)];
                }
            }
            else if (i == 0)
            {
                c = b[slice(j + 1, n - j - 1)] + c;
            }
            else
            {
                c = b[slice(j + 1, n - j - 1)] + c + b[slice(0, i+1)];
            }
            ans.pb(c);
        }
    }
    sort(ans.begin(), ans.end(), greater<string>());
    for (int  i = 0;i < ans.size();i++)
    {
        // cout << ans[i] << endl;
    }
    // cout << ans[0] << endl;
    for(int i = 0; i<n; i++)
    {
        cout<<ans[0][i]<<" ";
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


#include <iostream>
#include <algorithm>
using namespace std;
const int MN = 2048;
int ps[MN];
 
int main() {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;++i)cin>>ps[i];
		int m = max_element(ps,ps+n)-ps;
		if (m==0) m = max_element(ps+1,ps+n)-ps;
 
		int l=m-1;
		if (m==n-1 && ps[l]<ps[0]) {
			l = m;
		} else {
			while(l>0 && ps[0]<ps[l-1]) --l;
		}
		reverse(ps+l,ps+m);
		rotate(ps,ps+l,ps+m);
		rotate(ps,ps+m,ps+n);
		for(int i=0; i<n; ++i) cout<<ps[i]<<' ';
		cout<<'\n';
	}
}