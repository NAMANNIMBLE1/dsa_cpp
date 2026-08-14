#include<bits/stdc++.h>
using namespace std;


void insertion_sort(vector<int> &nums , int n){
    for (int i = 1; i < n; i++)
    {
        int key = nums[i];
        int j = i-1;

        while (j>=0 && key < nums[j])
        {
            /* code */
            nums[j+1] = nums[j];
            j--;
        }
        // after that it comes to be less than j we need to place key value at j org 
        nums[j+1] = key;
    }
}


int main(){
    vector<int> nums = {7, 4, 1, 5, 3};
    int n = nums.size();

    insertion_sort(nums,n);

    for(auto x : nums){
        cout<<x<<" ";
    }
    return 0;
}