#include<bits/stdc++.h>
using namespace std;

bool check_array_sorted(vector<int> nums , int n){ // complexity is O(n)
    // base case
    if(n == 1){
        return true;
    }

    for (int i = 1; i < n; i++)
    {
        if(nums[i-1] > nums[i]){
            return false;
        }
    }
    return true;
}


int main(){
    vector<int> nums = {1,2,3,4};
    int n = nums.size();

    cout<<check_array_sorted(nums,n)<<endl;
    return 0;
}