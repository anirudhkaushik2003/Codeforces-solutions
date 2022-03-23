#include <bits/stdc++.h>
using namespace std;

void merge(long long int a[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    int i = 0;

    int j = 0;

    int k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(long long int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        mergeSort(a, 0, n - 1);
        long long int mdiff, max;
        max = a[n - 1];
        mdiff = abs(a[0] - a[n - 1]);
        long long int count = 0;

        if (a[0] > 0)
            count = 1;
        else
        {

            for (int i = 0; i < n; i++)
            {
                if (i == 0)
                {
                    count += 1;
                    //cout << a[i] << "\n";
                }
                else
                {
                    int temp = abs(a[i] - a[i - 1]);
                    if (i == 1)
                    {
                        mdiff = temp;
                        
                    }
                    if (mdiff > temp)
                    {
                        mdiff = temp;
                    }
                    if (a[i] <= mdiff)
                    {
                        //cout << a[i] << "\n";
                        count++;
                    }
                    
                }
            }
        }

        cout << count << "\n";
        t--;
    }
}