#include<bits/stdc++.h>
using namespace std;

int remove_duplicates(vector<int> &nums , int n){
    if(n<=1){
        return nums[0];
    }

    int j = 0; // pointer to keep the track of unique elements 
    for (int i = 1; i < n; i++)
    {
        if(nums[j] != nums[i]){
            j++; // move the pointer next to tghe duplicate 
            nums[j] = nums[i]; // replace the duplicate with non matching element
        }
    }

    return j+1; // return new index of unique elements
}

int main(){
    vector<int> nums = {1,1,2,2,2,3,3,4};
    int n = nums.size();

    int j = remove_duplicates(nums,n);

    for (int i = 0; i < j; i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}