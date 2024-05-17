#include<bits/stdc++.h>
using namespace std;
int lb(vector<int>arr,int n,int key){
    int s=0,e=n-1;
    int mid=(s+e)/2;
    int ans;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]>=key){
            ans=arr[mid];
            e=mid-1;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
    }
    return ans;
}
int ub(vector<int>arr,int n,int key){
    int s=0,e=n-1;
    int ans;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]>key){
            ans=arr[mid];
            e=mid-1;
        }
        else s=mid+1;
    }
    return ans;
}
int main(){
    vector<int>arr={2,4,6,8,10,12,14};
    cout<<lb(arr,7,7)<<endl;
    cout<<ub(arr,7,7)<<endl;
    return 0;
}