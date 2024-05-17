#include <iostream>
using namespace std;
void bsort(int arr[], int n)
{
    int q = n;
    for (int i = 0; i < n - 1; i++)
    { 
        while (q--)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}

int main()
{
    int n = 6;
    int arr[] = {3, 1, 4, 9, 5, 7};
    bsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    }

    return 0;
}