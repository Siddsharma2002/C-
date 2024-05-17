#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>arr,int n,int target){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target)return mid;
        if(arr[low]==arr[mid]&&arr[mid]==arr[high]){
            low=low+1;
            high=high-1;
        }
        //left part sorted
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid] ){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        //right part sorted
        if(arr[mid]<=arr[high]){
            if(arr[mid]<=target && target <=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>arr={3,1,2,3,3,3,3};
    cout<<bs(arr,7,1);
    return 0;
}