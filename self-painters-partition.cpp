//this is also called split array-largest sum minimum
#include<bits/stdc++.h>
using namespace std;

int func2(vector<int>&arr,int i,int x){
    int n=arr.size();
    int cursum=0;
    //int x=1;
    for (int j = 0; j < n; j++)
    {
        //cursum+=arr[j];
        if(cursum + arr[j]<=i){
            
            cursum+=arr[j];
        }
        
        else {
            x++;
            cursum=arr[j];
        }
        
    }
    return x;
}

int func1(vector<int>&arr,int n,int k){
    int sum=0,maxi=0;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        maxi=max(maxi,arr[i]);
    }

    for (int i = maxi; i <= sum; i++)
    {
        if(func2(arr,i,1)==k) return i;
    }
    return maxi;
}
int main(){
    vector<int> arr={1, 2, 3, 4, 5};
    cout<<func1(arr,5,3);
    return 0;
}