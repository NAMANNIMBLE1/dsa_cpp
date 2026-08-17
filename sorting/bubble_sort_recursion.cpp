#include<bits/stdc++.h>
using namespace std;

void bubble_sort_recursive(vector<int> &nums , int n){
    // base case
    if(n == 1) return;

    for (int i = 0; i < n-1; i++) 
    {
        if(nums[i] > nums[i+1]){
            swap(nums[i],nums[i+1]);
        }
    }
    
    // after iteration do again until reaches the last unsorted part 
    bubble_sort_recursive(nums , n-1); // act as loop of ( j = n -> j >0 j--)
}

int main(){

    vector<int> nums = {1,4,6,3,8,0,7,12,10};
    int n =  nums.size();

    bubble_sort_recursive(nums , n);


    for(auto &x : nums){
        cout<<x<<" ";
    }

    return 0;
}