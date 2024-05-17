#include <bits/stdc++.h>
using namespace std;

void read(int n, vector<int> book, int target)
{
    sort(book.begin(), book.end());
    int left = book[0];
    int right = book[n - 1];
    int sum = 0;
    while (left <= right)
    {
        sum = book[left] + book[right];
        if(sum==target){
            cout<<"YES";
            break;
        } 
        if (sum < target && left <= right)
        {
            left++;
        }
        else if (sum > target && left <= right)
        {
            right--;
        }
        else{
            cout<<"NO";
            break;
        }

    }
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    read(5, arr, target);
    return 0;
}