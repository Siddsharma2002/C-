#include <bits/stdc++.h>
using namespace std;

int func(int arr[], int n, int h)
{
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(arr[i], maxi);
    }

    for (int i = 1; i <= maxi; i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            int x=arr[j]/i;
            int y=arr[j]%i;
            int z=x+y;
            ans+=z;
        }
        if (ans <= h)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {7, 15, 6, 3};
    cout << func(arr, 4, 8);
    return 0;
}