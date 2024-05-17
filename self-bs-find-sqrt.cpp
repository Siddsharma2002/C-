#include<bits/stdc++.h>
using namespace std;

int bs(int n){
    int s=1,e=n;
    int ans;
    while(s<=e){
        int mid=(s+e)/2;
        if(mid*mid==n){
            return mid;
        }
        if(mid*mid<=n){
            ans= mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
    cout<<bs(28);
    return 0;
}