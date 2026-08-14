#include<bits/stdc++.h>
using namespace std;


void bubble_sort(vector<int> &nums , int n){
    for(int i = n-1 ; i >= 0 ; i--){
        for (int j = 0; j < i; j++)
        {
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}

int main(){
    vector<int> nums = {5,4,3,2,1};
    int n = nums.size();

    bubble_sort(nums,n);

    for(auto x: nums){
        cout<<x<<" ";
    }

    return 0;
}