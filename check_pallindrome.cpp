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
bool check(int i,string &s,string t){
    if (s.at(i)!=t.at(i))
    {
        return false;
    }
    return true;
}
int main(){
    string s="payyap";
    string t="paypal";
    pal(0,6,s);
    //cout<<s;
    print(s);
    cout<<check(0,s,t);
    /*string s="string";
    cout<<sizeof(s)<<endl;
    cout<<s.length()<<endl;
    cout<<s.size();*/
    return 0;
}