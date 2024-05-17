//considering equal number of positives and negatives
#include <bits/stdc++.h>
using namespace std;

void func(int arr[], int n)
{
    int temp[n];
    int cntp = 0, cntn = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            temp[cntp] = arr[i];
            cntp = cntp + 2;
        }
        else
        {
            temp[cntn] = arr[i];
            cntn = cntn + 2;
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << temp[j] << " ";
    }
}

int main()
{
    int n = 6;
    int A[] = {1, 2, -4, -5, -3, 4};
    func(A, n);
    return 0;
}