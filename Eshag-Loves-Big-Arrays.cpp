#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r)
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

void mergeSort(int arr[], int l, int r)
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
        float sum;
        cin >> n;
        int a[n];
        int b[n];
        int c[101];
        int temp;
        for (int i = 0; i < 101; i++)
        {
            c[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = 0;
            c[a[i]]++;
        }
        for (int i = 1; i < 101; i++)
        {
            if (c[i] > 0)
            {
                temp = i;
                break;
            }
        }
        cout << (n - c[temp]) << "\n";
        t--;
    }
}