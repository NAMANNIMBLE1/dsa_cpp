#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int> &nums , int n){
    if(n <= 1){
        return -1;
    }

    unordered_map<int,int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++; // calculating the count of distinct elements in the array
    }
    
    for(auto it : mpp){
        if(it.second > int(n/2)){
            return it.first;
        }
    }

    return -1; // incase nothing is found
}

// tc : nlogn
// sc : o(n)

int main(){

    vector<int> nums = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    int n = nums.size();


    cout<<majority_element(nums,n);
    return 0;
}