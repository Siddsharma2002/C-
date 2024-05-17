// this is hashing for  lower case characters,same vid has all case solution try urself
#include<iostream>
using namespace std;

int main(){
    string s="siddhartheee";
    int x;
    int hash[26]={0};
    for ( int i = 0; i < 13; i++)
    {
        hash[s[i]-'a']+=1;//here s[i]-'a' is auto converted to integer as array hash needs int
        
    }
    cout<<hash[4];
    //or hash['c'-a];where c is cin>>char x
    return 0;
}