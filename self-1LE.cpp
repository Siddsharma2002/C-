#include <iostream>
using namespace std;

void func(int arr[], int n, int ind,int ans1)
{
    
    if (ind >= n-1)
    {
        cout<<ans1;
        return;  
    }
    if (arr[ind] > ans1)
    {
        ans1 = arr[ind];
    }
    func(arr,n,ind+1,ans1);
}
int main()
{
    int n = 7;
    int arr[n] = {8, 3, 75, 1, 56, 23, 11};
    func(arr,n,0,0);
    return 0;
}