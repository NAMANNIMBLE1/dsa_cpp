#include<bits/stdc++.h>
using namespace std;

int largest_element(vector<int> nums , int n){

    // base case
    if(n <= 1){
        return nums[0];
    }
    
    int max_element = INT_MIN;

    for(auto &x : nums){
        if(x > max_element){
            max_element = max(max_element,x);
        }
    }
    return max_element;
}

int main(){

    vector<int> nums = {1, 2, 4, 7, 7, 5};
    int n = nums.size();

    cout<<largest_element(nums,n);
    return 0;
}