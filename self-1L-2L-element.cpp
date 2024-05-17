#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> arr) {
    // Write your code here.
    int fle,sle;
    for (int i = 0; i < n; i++)
    {
        for ( int j = i; j < n-1; j++)
        {
            if(arr[i]<arr[j]){
                fle=arr[j];
                sle=arr[i];
            } 
        }
        
    }
    cout<<fle<<" "<<sle;
}

int main(){
    vector<int> vec={6,3,11,14,8};
    getSecondOrderElements(5,vec);
    return 0;
}