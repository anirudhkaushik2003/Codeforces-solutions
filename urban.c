
#include <stdio.h>

void merge(long long int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    long long int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] >= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(long long int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    long long int n, n1, n2;

    scanf("%lld %lld %lld", &n, &n1, &n2);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    mergeSort(a, 0, n - 1);
    if (n1 < n2)
    {
        double arith1 = 0, arith2 = 0;
        int i;

        for (i = 0; i < n1; i++)
        {

            arith1 += a[i];
        }
        arith1 /= n1;
        for (i = n1; i < n1 + n2; i++)
        {
            arith2 += a[i];
        }
        arith2 /= n2;
        printf("%lf\n", arith1 + arith2);
    }
    else
    {
        double arith1 = 0, arith2 = 0;
        int i;

        for (i = 0; i < n2; i++)
        {

            arith2 += a[i];
        }
        arith2 /= n2;
        for (i = n2; i < n1 + n2; i++)
        {
            arith1 += a[i];
        }
        arith1 /= n1;
        printf("%lf\n", arith1 + arith2);
    }
}