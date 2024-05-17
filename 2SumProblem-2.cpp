#include<bits/stdc++.h>
using namespace std;

vector<int> read(int n, vector<int> book, int target){
    map<int,int> mpp;
    
    for (int i = 0; i < n; i++) 
    {
        int a=book[i];
        int more=target-a;
        if (mpp.find(more)!=mpp.end())
        {
            return {mpp[more],i};//this use of curly braces denotes vector
        }
        mpp[a]=i;
    }
    return {-1,-1};
}
int main(){

    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = read(5, arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    return 0;
}