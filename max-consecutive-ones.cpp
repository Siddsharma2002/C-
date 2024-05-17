#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int findmaxones(vector<int>&nums){
        int maxi=0;
        int cnt=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==1){
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
};
int main(){
    Solution obj;
    vector<int>arr={2,4,5,1,1,0,1,1,1};
    int result=obj.findmaxones(arr);
    cout<<result;
    return 0;
}