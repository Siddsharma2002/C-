//better approach,Hash approach
#include<bits/stdc++.h>
using namespace std;

string read(int n, vector<int> book, int target){
    map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        int a=book[i];
        int more=target-a;
        if (mpp.find(more)!=mpp.end())
        {
            return "YES";
        }
        mpp[a]=i;
    }
    return "NO";
}
int main(){
    vector<int> vec = {1, 2, 3, 3, 4, 5};
    cout<<read(6,vec,6);
    return 0;
}