#include<bits/stdc++.h>
using namespace std;
void ms(vector<int> &arr,int low,int high){
    int mid=(low+high)/2;
    if(low>=high){
        return;
    }
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void merge(vector<int> &arr,int low, int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i]=temp[i-low];
    }
    
}
void msort(vector<int> &arr,int n){
    ms(arr,0,n-1);
        for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
/*void print(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}*/
int main(){
    vector<int> arr={2,5,1,6,4};
    msort(arr,5);
    
    for(int i=0;i<5;i++){
        cout<<arr[i];}
    
    return 0;
}