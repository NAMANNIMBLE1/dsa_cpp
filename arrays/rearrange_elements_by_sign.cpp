#include<bits/stdc++.h>
using namespace std;

void rearrange_elements(vector<int>& nums, int n) {
    vector<int> positives;
    vector<int> negatives;

    positives.reserve(n / 2);
    negatives.reserve(n / 2);

    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            positives.push_back(nums[i]);  // negative
        } else {
            negatives.push_back(nums[i]);   // positive
        }
    }

    vector<int> temp(n);

    int positive_pos = 0;
    int negative_pos = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            temp[i] = negatives[positive_pos++];
        } else {
            temp[i] = positives[negative_pos++];
        }
    }

    for(int i = 0 ; i < n ;i++){
        nums[i] = temp[i];
    }
}

void rearrange_elements_simplified(vector<int>& nums, int n) {
    vector<int> positives;
    vector<int> negatives;

    positives.reserve(n / 2);
    negatives.reserve(n / 2);

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            positives.push_back(nums[i]);  // negative
        } else {
            negatives.push_back(nums[i]);   // positive
        }
    }

    vector<int> temp(n);

    for (int i = 0; i < n/2; i++) {
        nums[2*i] = positives[i];
        nums[2*i+1] = negatives[i];
    }
}

void rearrange_elements_optimized(vector<int> &nums , int n){
    int negative_index = 1;
    int positive_index = 0;

    vector<int> ans(n,0);

    for (int i = 0; i < n; i++)
    {
        // finding the first pos or neg index 
        if(nums[i] < 0){
            ans[negative_index] = nums[i];
            negative_index += 2;
        }else{
            ans[positive_index] = nums[i];
            positive_index += 2;
        }
    }

    for(int i = 0 ; i < n ; i++){
        nums[i] = ans[i];
    }
}



int main(){
    vector<int> nums = {1,2,3,-1,-2,-3};
    int n = nums.size();

    // rearrange_elements(nums,n);
    // rearrange_elements_simplified(nums,n);
    rearrange_elements_optimized(nums,n);

    for(auto x : nums){
        cout<<x<<" ";
    }
    return 0;
}