#include<bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> arr) {
    vector<int>temp;
    for (int i = 0; i < n; i++)
    {
        
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }        
    }
    int nz=temp.size();
    for (int i = 0; i < nz; i++)
    {
        arr[i]=temp[i];
    }
    for (int i = nz; i < n; i++)
    {
        arr[i]=0;
    }
    
    return arr;
    
} 


int main(){
    vector<int> arr = {0, 3, 0, 1};
    vector<int> ans = moveZeros(4, arr);//THis is neew point 
    for (auto it:ans){
        cout<<it;
    }
    return 0;
}