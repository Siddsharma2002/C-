//program to find number of subsequences whose sum is something
#include<bits/stdc++.h>
using namespace std;
int print(int ind,int s,int sum,int arr[],int n){
    if(ind==n){

        //condition satisfies
        if (s==sum)
        {
            return 1;
        }

        //condition not satisfied
        return 0;//or ->else return 0;
    }
    
    s+=arr[ind];
    int l=print(ind+1,s,sum,arr,n);
        
    s-=arr[ind];
   

    //not pick
    int r=print(ind+1,s,sum,arr,n);

    return l+r;
}

int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    
    cout<<print(0,0,sum,arr,n);
    return 0;
}