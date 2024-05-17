#include<bits/stdc++.h>
using namespace std;

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int x,y;
    x=a.size();
    y=b.size();
    int n=x+y;
    vector<int> temp (n,-1);
    for (int i = 0; i < x; i++)
    {
        temp[a[i]] = a[i];
    }
    for (int i = 0; i < y; i++)
    {
        temp[b[i]]=b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (temp[i]!=-1)
        {
            cout<<temp[i];
        }
    }
    
}
int main(){
    vector<int> a={0,2,4};
    vector<int> b={1,2,3,5};
    sortedArray(a,b);
    return 0;
}