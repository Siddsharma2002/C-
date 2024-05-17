#include<bits/stdc++.h>
using namespace std;

int majele(vector<int> arr){
    int n=arr.size();
    int cnt=0;
    int ele=arr[0];
    for (int i = 0; i < n; i++)
    {
        int curele=arr[i];
        if(curele==ele){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt==0){
            ele=curele;
            cnt++;
        }
    }
    return ele;
}
int check(vector<int> arr,int n){
    int x=majele(arr);
    int cnt2=1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==x){
            cnt2++;
        }
    }
    
    if(3*cnt2>=n){
        return 1;
    }
    return -1;
}
int main(){
    vector<int>arr={2,2,1,3,1,1,3,1,1};
    cout<<check(arr,9);
    return 0;
}