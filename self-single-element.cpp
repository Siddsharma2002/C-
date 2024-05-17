#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int n=arr.size();	
	for(int i=0;i<n;i=i+2){
		if(arr[i]==arr[i+1] ){

		}
		else{
			return arr[i];
		}
	}
}
int main(){

    vector<int>arr={1,1,2,2,3};
    cout<<getSingleElement(arr);
    return 0;
}