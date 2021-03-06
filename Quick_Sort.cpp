#include <bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high)
{
    int pivot = a[high];
    int i = (low - 1);

    for (int j = low; j < high; j++)
    {
        if (a[j] < pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return (i + 1);
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(a, low, high);
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

void print(int a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    int a[] = {5, 2, 14, 10, 20, 15};
    int n = sizeof(a) / sizeof(a[0]);
    quickSort(a, 0, n - 1);
    cout << "Sorted array: " << endl;
    print(a, n);
    return 0;
}
