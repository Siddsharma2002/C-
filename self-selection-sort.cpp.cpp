#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&arr) {
    // Write your code here.
    int n;
    cout<<"input n";
    cin>>n;
    cout<<" input arr";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        //for swapping without swap();
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }

}
int main(){
    int x=5;
    vector<int > arr;
    selectionSort(arr);
        for(int i=0;i<x;i++){
        cout<<arr[i];
    }
    return 0;
}