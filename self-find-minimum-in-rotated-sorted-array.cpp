#include<bits/stdc++.h>
using namespace std;

int bs(int arr[],int n){
    int low=0,high=n-1;
    int mini=INT_MAX;
    
    while(low<=high){
        int mid=(low+high)/2;
        mini=min(arr[mid],mini);

        //right part is sorted
       if(arr[mid]<=arr[high]){
        high=mid-1;
       }
       //left part sorted
       //if(arr[low]<arr[mid]){ this is wrong in some cases
        else{
        low=mid+1;
       }
    }
    return mini;
}
int main(){
    int arr[]={25, 30, 5, 10, 15, 20};
   cout<< bs(arr,6);
    return 0;
}