#include<bits/stdc++.h>
using namespace std;

bool isSorted(int n, vector<int> arr) {
    // Write your code here.
    for (auto it:arr)
        if (arr[it]<=arr[it+1]) return true;
    else
    {
        return false;
    }
      
    
}

int main(){
    vector<int> vec={1,2,3,4,5};
    cout<<isSorted(5,vec);
    return 0;
}