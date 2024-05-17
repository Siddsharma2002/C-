#include<bits/stdc++.h>
using namespace std;

void pastri(int row){
    for(int j=1;j<=row;j++){
    int ans=1;
    cout<<ans;

    for (int i = 1; i <row; i++)
    {
        ans=ans*(row-i);
        ans=ans/i;
        cout<<ans;
    }
    }
}
int main(){
    pastri(6);
    return 0;
}