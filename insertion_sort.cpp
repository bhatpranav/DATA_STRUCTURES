#include <iostream>

void insertion_sort(int *arr, int n)
{
    int temp{0};
    int j{0};
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int n{0};
    std::cout << "Enter the length: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter the elements: " << std::endl;
    for (size_t i = 0; i < n; i++)
    {
        std::cout << "Element " << i << " = ";
        std::cin >> arr[i];
    }

    std::cout << "The Sorted array is: " << std::endl;
    insertion_sort(arr, n);

    for (size_t i = 0; i < n; i++)
    {
        std::cout << "Element " << i << " = " << arr[i] << std::endl;
    }
}