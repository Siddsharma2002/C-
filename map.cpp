/**
 * map stores values in sorted order
 * map is <key,value or frequency> if key not present it auto adds key with freq=1
 * **/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n=5;           
    map<int,int> mpp;
     int arr[n]={1,3,1,2,3};
     
     for(int i=0;i<n;i++){
        mpp[arr[i]]++;
     }
    for (int j = 0; j < 5; j++)
    {
        cout<<mpp[j];   
    }
    cout<<endl;
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
     return 0;
} 