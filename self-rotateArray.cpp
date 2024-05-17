#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int n)
{
    vector<int> temp(n);
    for (int i = 0; i < n - 1; i++)
    {
        temp[i] = arr[i + 1];
    }
    temp[n-1]=(arr[0]);
    for (int j = 0; j < n ; j++)
    {
        arr[j] = temp[j];
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    rotateArray(arr, 5);
    for (int j = 0; j < 5 ; j++)
    {
        cout<<arr[j];
    }
    return 0;
}