#include <bits/stdc++.h>
using namespace std;
  
#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<ll, ll>
#define vi vector<ll>
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
ll binarySearch(vll arr, ll l, ll r, ll x)
{
    if (r >= l) {
        ll mid = l + (r - l) / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
  
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}
  

ll lower_bound(vll arr, ll low,
                ll high, ll X)
{
 
    // Base Case
    if (low > high) {
        return low;
    }
 
    // Find the middle index
    ll mid = low + (high - low) / 2;
 
    // If arr[mid] is greater than
    // or equal to X then search
    // in left subarray
    if (arr[mid] >= X) {
        return lower_bound(arr, low,
                           mid - 1, X);
    }
 
    // If arr[mid] is less than X
    // then search in right subarray
    return lower_bound(arr, mid + 1,
                       high, X);
}
 
// Recursive implementation of
// upper_bound
ll upper_bound(vll arr, ll low,
                ll high, ll X)
{
 
    // Base Case
    if (low > high)
        return low;
 
    // Find the middle index
    ll mid = low + (high - low) / 2;
 
    // If arr[mid] is less than
    // or equal to X search in
    // right subarray
    if (arr[mid] <= X) {
        return upper_bound(arr, mid + 1,
                           high, X);
    }
 
    // If arr[mid] is greater than X
    // then search in left subarray
    return upper_bound(arr, low,
                       mid - 1, X);
}