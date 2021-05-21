// C++ program for implementation of selection sort
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selection_sort(int arr[], int n)
{
    int i, j, min;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++)
    {
        // Find the minimum element in unsorted array
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(&arr[min], &arr[i]);
    }
}

// Driver program to test above functions
int main()
{
    int n{0};
    cout << "Enter the length: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << " = ";
        cin >> arr[i];
    }

    selection_sort(arr, n);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << " = " << arr[i] << endl;
    }

    return 0;
}

// This is code is contributed by rathbhupendra
