#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void leftRotate(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int arr[]={2,3,4,5,6,7};
    leftRotate(arr,6,2);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    return 0;
}