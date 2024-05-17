#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> &arra, vector<int> &arrb, int a, int b)
{
    // Write your code here
    vector<int> temp(6);//here problem exist we have to specify seze of temp..without knowing how many elements would come after union
    int i = 0;
    int left, right;
    left = 0;
    right = 0;
    while (left < a && right < b)
    {
        if (arra[left] < arrb[right])
        {
            temp[i] = arra[left];
            left++;
        }
        else if (arra[left]==arrb[right])
        {
            temp[i]=arra[left];
            left++;
            right++;
        }
        else 
        {
            temp[i] = arrb[right];
            right++;    
        }
        i++;
    }
    while (left < a)
    {
        temp[i] = arra[left];
        left++;
        i++;
    }
    while (right < b)
    {
        temp[i] = arrb[right];
        right++;
        i++;
    }

    for (auto it : temp)
    {
        // Print the values
        cout << it << ' ';
    }
}

int main()
{
    vector<int> arra = {2, 3, 4, 5};
    vector<int> arrb = {0, 3, 6};

    sortedArray(arra, arrb, 4, 3);

    return 0;
}