//check
#include<bits/stdc++.h>
using namespace std;

int func(vector<int>arr,int n,int k){
    map<int,int>mpp;
    mpp[10,-1];
    int miss=0;
    for (int i = 0; i <n; i++)
    {
        mpp[arr[i]]++;
    }
    // declare map iterator
    map<int, int>::iterator it;
    for (it = mpp.begin(); it !=mpp.end(); it++)
    {
        if(it->second==-1){
            miss++;
        }
        if(miss==k) return it->first;
    }
    return -100;
}
int main(){
    vector<int>arr={1,3,5,7,9};
    cout<<func(arr,5,3);
    return 0;
}