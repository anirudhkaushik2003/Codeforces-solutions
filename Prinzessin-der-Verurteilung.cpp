#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    bool cond = false;
    cin >> n;
    bool alpha[26];
    char beta[26];
    for (int i = 0; i < 26; i++)
    {
        alpha[i] = false;
        beta[i] = i + 'a';
    }
    char a[n + 1];
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        alpha[(a[i] - 'a')] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] == false)
        {
            cout << beta[i] << endl;
            return;
        }
    }
    vector<int> store;
    int count = 0, count2 = 0;
    cond = false;
    vector<char> temp;
    for (int k = 0; k < 26; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == beta[k])
            {
                store.push_back(i);
                count++;
            }
        }
        for (int l = 0; l < count; l++)
        {

            if (store[l] < n - 1)
            {
                temp.push_back(a[store[l] + 1]);
            }
        }
        sort(temp.begin(), temp.end());
        for (int i = 0; i < 26; i++)
        {
            alpha[i] = false;
        }

        for (int p = 0; p < temp.size(); p++)
        {
            alpha[(temp[p] - 'a')] = true;
        }
        for (int j = 0; j < 26; j++)
        {
            if (alpha[j] == false)
            {
                cout << beta[k] << beta[j] << endl;
                return;
            }
        }

        store.clear();
        count = 0;
        temp.clear();
    }
    for (int q = 0; q < 26; q++)
    {
        for (int k = 0; k < 26; k++)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == beta[q] && a[i + 1] == beta[k])
                {
                    store.push_back(i);
                    count++;
                }
            }
            for (int l = 0; l < count; l++)
            {

                if (store[l] < n - 1)
                {
                    temp.push_back(a[store[l] + 2]);
                }
            }
            sort(temp.begin(), temp.end());
            for (int i = 0; i < 26; i++)
            {
                alpha[i] = false;
            }

            for (int p = 0; p < temp.size(); p++)
            {
                alpha[(temp[p] - 'a')] = true;
            }
            for (int j = 0; j < 26; j++)
            {
                if (alpha[j] == false)
                {
                    cout << beta[q] << beta[k] << beta[j] << endl;
                    return;
                }
            }

            store.clear();
            count = 0;
            temp.clear();
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}