#include<bits/stdc++.h>
using namespace std;

// time complexity : 0(n)
// space complexity : constant

int number_appeared_once(vector<int> nums , int n){
    //base case
    if(n <=1){
        return nums[0];
    }

    unordered_map<int,int> map;

    for(auto x : nums){
        map[x]++; // calculating frequency
    }
    
    for(auto x : map){
        if(x.second == 1){
            return x.first;
        }
    }

    return -1;
}


int main(){
    vector<int> nums = {2,1,2};
    int n = nums.size();

    cout<<number_appeared_once(nums,n);
    return 0;
}