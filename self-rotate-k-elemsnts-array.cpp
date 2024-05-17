#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
    int n=arr.size();

    vector<int> temp(n);
    for (int i = k; i < n; i++)
    {
        temp[i-k] = arr[i];

    }
    for (int j = 0; j < k; j++)
    {
        /* code */
        temp[k+j+1]=(arr[j]);
        //temp.push_back(arr[i]);
    }
    for (int j = 0; j < n ; j++)
    {
        arr[j] = temp[j];
    }
    for (int p = 0; p < 7 ; p++)
    {
        cout<<arr[p]<<" ";
    }

}

int main(){
    vector<int> arr = {7,8,9,10,11,12,13};
    rotateArray(arr, 3);

    return 0;
}