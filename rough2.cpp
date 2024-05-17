// // #include <bits/stdc++.h>
// // using namespace std;

// // int removeDuplicates(vector<int> &arr, int n)
// // {
// //     // Write your code here.
// //     vector<int> temp;
// //     for (int i = 0; i < n - 1; i++)
// //     {
        
// //         if (arr[i] != arr[i + 1])
// //         {
// //             // temp[i] = arr[i];
// //              temp.push_back(arr[i]);
// //         }
// //         else
// //         {
// //             temp.push_back(i+1);
// //         }
        
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout<<temp[i];
// //     }
    
// //     // for (int i = 0; i < n; i++)
// //     // {
// //     //     arr.pop_back();
// //     // }
    
// //     // int x=temp.size();
// //     // for (int j = 0; j < x; j++)
// //     // {
// //     //     arr.push_back(temp[j]);
// //     // }
// // }

// // int main()
// // {
// //     vector<int> vec = {1, 2, 3, 3, 4, 5};
// //     removeDuplicates(vec, 6);
// //     // for (auto it : vec)
// //     // {
// //     //     cout << vec[it];
// //     // }
// //     return 0;
// // }
// #include<bits/stdc++.h>
// using namespace std;

// void removeDuplicates(vector<int> &arr, int n){
//     vector<int> temp;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==arr[i-1])
//         {
//             /* code */
//             arr.pop_front();
//         }
//         else
//         {
//             temp.push_back(arr[i]);
//         }
//     }
//     int x=temp.size();
    
//     for (int i = 0; i < x; i++)
//     {
//         arr[i]=temp[i];
//     }
    
//     for(auto it:arr){
//         cout<<it<<" ";
//     }
// }

// int main(){

//     vector<int> vec = {1, 2, 3, 3, 4, 5};
//     removeDuplicates(vec, 6);

//     return 0;
// }