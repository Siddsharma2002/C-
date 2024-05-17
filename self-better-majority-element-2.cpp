#include<bits/stdc++.h>
using namespace std;

int majele(vector<int> arr){
    int n=arr.size();
    map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]+=1;
    }
    for(auto it: mpp){
        if(3*(it.second) >= n ){
            return 1;
        }
    }
    return -1;
}
int main(){
    vector<int>arr={2,2,1,3,1,1,3,1,1};
    cout<<majele(arr);
    return 0;
}