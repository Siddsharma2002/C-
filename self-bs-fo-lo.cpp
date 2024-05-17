#include<bits/stdc++.h>
using namespace std;

int bs1(vector<int>arr,int n,int key){
    int s=0,e=n-1;
    int fo;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            fo=mid;
            e=mid-1;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
    }
    return fo;
}
int bs2(vector<int>arr,int n,int key){
    int s=0,e=n-1;
    int lo;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            lo=mid;
            s=mid+1;
        }
        if(arr[mid]>key){
            e=mid-1;
        }
        if(arr[mid]<key){
            s=mid+1;
        }
    }
    return lo;
}
int main(){
    vector<int>arr={2,8,8,8,9};
   int f= bs1(arr,5,8);
   int l= bs2(arr,5,8);
   cout<<l-f+1;
    return 0;
}