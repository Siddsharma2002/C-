#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n,int d){
    d=d%n;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i]=arr[i];
    }
    
    for (int i = d; i < n; i++)
    {
        arr[i-d]=arr[i];
    }
    for (int i = n-d; i < n; i++)
    {
        arr[i]=temp[i-(n-d)];
    }
}
int main(){
    int arr[]={2,3,4,5,6,7};
    leftRotate(arr,6,2);
    for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    return 0;
}