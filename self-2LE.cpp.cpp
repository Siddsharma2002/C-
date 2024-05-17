#include<iostream>
using namespace std;
// is se yeh sikha ki as a parameter pass karo toh stack mei hi hata hai--> koi return krke stack mei nai bharne ka nai...tthat would give false too
void func(int arr[],int n,int ind,int ans1,int ans2){
    //int ans2;
    //or
    //int ans=0;
    if(ind==n){
        cout<<ans2;
        return;
    }
    if (arr[ind]>ans1 )
    {
        ans2=ans1;
        ans1=arr[ind];
    
    }
    func(arr,n,ind+1,ans1,ans2);
    
}

int main(){
    int n = 7;
    int arr[n] = {8, 3,11, 1, 56, 23, 75};
    func(arr,n,0,0,0);

    return 0;
}