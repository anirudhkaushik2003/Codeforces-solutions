// CPP program to find LCS of two arrays with
// k changes allowed in first array.
#include <bits/stdc++.h>
using namespace std;
#define MAX 101

// Return LCS with at most k changes allowed.
int lcs(vector<vector<vector<int>>> dp, string arr1, int n, string arr2, int m, int k)
{
    // If at most changes is less than 0.
    if (k < 0)
    {
        return -1e7;
    }
    // If any of two array is over.
    if (n <= 0 || m <= 0)
    {
        return 0;
    }

    // Making a reference variable to dp[n][m][k]
    int ans = dp[n-1][m-1][k-1];

    // If value is already calculated, return
    // that value.
    if (ans != -1)
        return ans;

    cout << "n: " << n << " m: " << m << " k: " << k << " " << ans <<  endl;

    // calculating LCS with no changes made.
    ans = max(lcs(dp, arr1, n - 1, arr2, m, k),
              lcs(dp, arr1, n, arr2, m - 1, k));

    
    // calculating LCS with changes made.
    int dist = abs(arr1[n - 1] - arr2[m - 1]);
    ans = max(ans, 1 + lcs(dp, arr1, n - 1, arr2, m - 1, (k - dist)));

    dp[n-1][m-1][k-1] = ans;

    return ans;
}

// Driven Program
int main()
{
    int k = 6;
    string arr1 = "fpelqanxyk";
    string arr2 = "hackerrank";
    int n = arr1.size();
    int m = arr2.size();

    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(m+1, vector<int>(k+1, -1)));

    cout << lcs(dp, arr1, n, arr2, m, k) << endl;

    return 0;
}
