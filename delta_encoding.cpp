// Solution context: https://codeforces.com/contest/276/problem/C

for (int i = 0; i < k; i++)
{
    cin >> x1 >> x2;
    arr[x1 - 1]++;
    arr[x2]--;
}
for (int i = 0; i < n; i++)
    arr[i] += arr[i - 1];