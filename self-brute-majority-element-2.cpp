#include <bits/stdc++.h>
using namespace std;

int majele(vector<int> arr)
{
    int n = arr.size();
    int cnt = 1, maxcnt = 0;
    for (int i = 0; i < n; i++)
    {
        int ele = arr[i];
        for (int j = i; j < n; j++)
        {
            if (arr[j] == ele)
            {
                cnt++;
                maxcnt = max(cnt, maxcnt);
            }
        }
    }
    int check=maxcnt;
    if ( (3*check) >= n )
    {
        return 1;
    }

    return -1;
}
int main(){
    vector<int>arr={2,2,1,3,1,1,3,1,1};
    cout<<majele(arr);
    return 0;
}