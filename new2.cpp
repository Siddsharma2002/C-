#include<bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices){
    int mini=prices[0];
    int maxprofit=0;
    int n=prices.size();
    for (int i = 0; i < n; i++)
    {
        
        int cost=prices[i]-mini;
        maxprofit=max(maxprofit,cost);
        mini=min(mini,prices[i]);
    }
    return maxprofit;
}

int main(){
    vector<int> arr={5,7,1,3,6,4};
    cout<<maximumProfit(arr);
    return 0;
}