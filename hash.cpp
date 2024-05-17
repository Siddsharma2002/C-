/** hashing is storing value to reduce time complexity
 numbers can go til 10^9(or1e9)
 inside main u can go till 10^6(or 1e6) for array
 but if u declare it globally above main then it can take 10^7 value(1e7) for array
 and if declared globally then no need to assign zero to its positions bcoz,globally instead of garbage value ,0 is assigned there
 **/
#include<iostream>
using namespace std;
//hash[10000000]
int main(){
     int n=5;
                      
     int hash[5]={0};
     int arr[n]={1,3,1,2,3};
     
     for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
     }
    for (int j = 0; j < 6; j++)
    {
        cout<<hash[j];   
    }
    
     return 0;
} 