#include<bits/stdc++.h>
using namespace std;

vector<int> func(vector<int>arr,int n){
    int maxi=INT_MIN;
    vector<int>temp;
    for (int i = n-1; i >= 0; i--)
    {
        if(arr[i]>maxi){
            maxi=arr[i];
            temp.push_back(arr[i]);
        }
    }
    //if want to sort->sort( temp.begin(),temp.end() )
    return temp;
    

}

int main(){
int n = 6;
vector<int> arr = {10, 22, 12, 3, 0, 6};
vector<int> ans = func(arr,n);
for(auto it:ans){
        cout<<it<<" ";
    }
return 0;
}