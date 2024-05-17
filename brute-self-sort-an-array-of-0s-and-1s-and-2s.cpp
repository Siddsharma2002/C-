#include<bits/stdc++.h>
using namespace std;

void count(int n,vector<int> arr){
    sort(arr.begin(),arr.end());
    for(auto it:arr){
        cout<<it;
    }
}

int main(){
    vector<int> vec={2,2,2,2,0,0,1,0};
    int n=8;
    count(n,vec);
    return 0;
}