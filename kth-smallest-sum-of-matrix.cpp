#include <bits/stdc++.h>
using namespace std;

#define ll long long

class Solution 
{
    public : int kthSmallest(vector<vector<int>> &mat, int k)
    {
        int m = mat.size();
        int n = mat[0].size();
        priority_queue<vector<int>> pq;
        int sum = 0;
        vector<int> temp(m + 1, 0);
        for (int i = 0; i < m; i++)
        {
            sum += mat[i][0];
        }
        temp[0] =-(sum);
        pq.push(temp);
        int count = 1;
        map<vector<int>, int> mp;
        mp[temp] = 1;
        while (!pq.empty())
        {
            if (count == k)
                break;
            temp = pq.top();
            pq.pop();
            for (int i = 0; i < m; i++)
            {
                vector<int> t = temp;
                if (t[i + 1] < n - 1)
                {
                    int val = -t[0];
                    val -= mat[i][t[i + 1]];
                    val += mat[i][t[i + 1] + 1];
                    t[i + 1]++;
                    t[0] = -val;

                    if (mp[t] != 1)
                    {
                        pq.push(t);
                        mp[t] = 1;
                    }
                }
            }
            count++;
        }
        temp = pq.top();
        return -temp[0];
    }
};