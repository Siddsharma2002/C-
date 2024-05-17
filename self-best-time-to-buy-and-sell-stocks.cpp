#include<bits/stdc++.h>
using namespace std;

void func(int arr[],int n){
    int min=INT_MAX,max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        for (int j = i+1; j < n;j++)
        {
            if (arr[j]>max)
            {
                max=arr[j];
            }
            
        }
        
    }
    cout<<"max is"<<max<<"min is "<<min;
}

int main(){
    int arr[]={7,1,5,3,6,4};
    func(arr,6);
    return 0;
}