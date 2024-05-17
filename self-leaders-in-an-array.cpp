#include <bits/stdc++.h>
using namespace std;

void func(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        bool f=true;
        if (i == n - 1)
        {
            cout << arr[i];
            return;
        }

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                 f=false;
                 break;
            }
        }
        if (f)
        {
            cout<<arr[i]<<" ";
        }
        
    }
}
int main()
{
    vector<int> arr = {10, 12, 22,12, 3, 0, 6};
    func(arr, 7);
    return 0;
}