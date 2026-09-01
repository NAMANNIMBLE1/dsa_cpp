#include<bits/stdc++.h>
using namespace std;

bool two_sum(vector<int> nums, int n , int target){
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(nums[i] + nums[j] == target){
                return true;
            }
        }
    }
    return false;
}


bool two_sum_better(vector<int> nums, int n , int target){
    unordered_set<int> s;
    for(int i = 0 ; i < n ; i++){
        if(s.find(target - nums[i]) != s.end()){
            return true;
        }
        s.insert(nums[i]);
    }
    return false;
}


bool two_sum_greedy(vector<int> nums , int n , int target){
    sort(nums.begin() , nums.end());
    int i = 0;
    int j = n-1;

    while(i < j){
        int sum = nums[i] + nums[j];
        if(sum == target){
            return true;
        }
        else if(sum < target){
            i++;
        }
        else{
            j--;
        }
    }
    return false;
}

int main(){

    vector<int> nums = {2,6,5,8,11};
    int n = nums.size();
    int target = 14;

    cout << two_sum(nums, n, target) << endl;
    cout << two_sum_better(nums, n, target) << endl;
    cout << two_sum_greedy(nums, n, target) << endl;

    return 0;
}