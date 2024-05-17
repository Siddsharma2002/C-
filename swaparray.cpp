#include<iostream>
using namespace std;
void rev(int i,int n,int arr[]){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    rev(i+1,n,arr);

    
}
int main(){
    int arr[]={2,3,4,6,7};
    rev(0,5,arr);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }
    return 0;
}