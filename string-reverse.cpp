#include<iostream>
using namespace std;
void pal(int i,int n,string &s){
    if (i>=n/2)
    {
        return ;
    }
    
    swap(s.at(i),s.at(n-i-1));
    pal(i+1,n,s);
    //cout<<s;
}void print(string &s){
    cout<<s;
}
int main(){
    string s="paypal";
    pal(0,6,s);
    //cout<<s;
    print(s);
    return 0;
}