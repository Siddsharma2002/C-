//self made selection sort
#include<bits/stdc++.h>
using namespace std;
void ssort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        //check if elements ahead of it arr smaller than it
        int cnt=0;
        for (int j = i+1; j < n; j++)
        {
            
            if (arr[i]>arr[j])
            {
                cnt++;
                swap(arr[i],arr[i+cnt]);
            }
            
        }
        
        
        //ssort(n,cnt=0,arr);
    }
}
int main(){
    int n=6;
    int arr[]={3,1,4,9,5,7};
    ssort(n,arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}