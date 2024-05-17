#include <bits/stdc++.h>
using namespace std;

bool ls(vector<int> arr,int key){
    int n=arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return true;
        }
        
    }
    return false;
}

void func(vector<int> arr, int n)
{
    int maxcnt = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 1;
        int ele = arr[i];
        while(ls(arr,ele+1)==true){
            cnt++;
            ele=ele+1;
        }
        maxcnt=max(maxcnt,cnt);
    }
    cout << maxcnt;
}

int main()
{
    vector<int>arr={102,4,100,1,101,3,2,1,1};
    func(arr,9);
    return 0;
}