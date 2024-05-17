#include<iostream>
using namespace std;

void fun(int arr[],int n){
    int cnt=0,max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }
        else{
            cnt=0;
        }
        if(max<cnt){
            max=cnt;
        }
    }
    cout<<max;
}

int main(){
    int arr[]={1,1,0,1,1,1,0,1,1};
    fun(arr,9);
    return 0;
}