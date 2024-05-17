#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<vector>


int getSingleElement(vector<int> &arr){
	// Write your code here.
    int n;
    cout<<"input";
    cin>>n;
    int j=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]==arr[j] || arr[i]==arr[i+1]){
            j++;
        }
        else{
            return arr[i];
        }
    }
    
}


int main(){
    vector<int> arr ={1, 1, 2, 3, 3, 4, 4};
    int n=7;
    cout<<getSingleElement(arr);
    return 0;
}