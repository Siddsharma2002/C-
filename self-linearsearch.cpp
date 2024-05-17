#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n, int num, vector<int> &arr)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==num)
        {
            return i;
        }
        
    }
    return -1;
}

int main (){
    vector<int> arr={2,4,6,8,10};
    cout<<linearSearch(5,6,arr);
    return 0;
}