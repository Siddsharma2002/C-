#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
    int maxi;
    for(int i=0;i<n-1;i++){
       maxi=i;
        for(int j=i;j<n;j++){
            if(arr[j]>arr[i])
                maxi=j;
        }
    }
    cout<<arr[maxi];
}
int main(){
    vector<int> vec={6,3,11,14,8};
    largestElement(vec,5);
    return 0;
}