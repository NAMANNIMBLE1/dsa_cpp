#include<bits/stdc++.h>
using namespace std;

void left_rotate_by_one(vector<int> &nums , int n){
    // base case
    if(n<=1){
        return;
    }

    // main logic
    int temp = nums[0];

    for (int i = 1; i < n; i++)
    {
        nums[i-1] = nums[i];
    }
    
    nums[n-1] = temp;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    int n = nums.size();

    left_rotate_by_one(nums,n);

    for(auto x : nums){
        cout<<x<<" ";
    }
    return 0;
}