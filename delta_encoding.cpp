// Solution context: https://codeforces.com/contest/276/problem/C

for (int i = 0; i < k; i++)
{
    cin >> x1 >> x2;
    arr[x1 - 1]++;
    arr[x2]--;
}

// store difference between i and i-1 at index i-> delta[i] = a[i]-a[i-1]
// when incrementing values over a range l to r, increment delta[l]++ and decrement delta[r+1]
// this will increment the values in the range l to r (inclusive) by 1 (or any number you chose to add)
// calculate prefix sum to get the actual values of the array
for (int i = 0; i < n; i++)
    arr[i] += arr[i - 1];