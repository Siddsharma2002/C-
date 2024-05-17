#include<iostream>
using namespace std;

int bs(int n){
    int low=1,high=n;
    int ans=1;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid<=n){
            low=mid+1;
            ans=mid;
            return ans;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    cout<<bs(28);
    return 0;
}