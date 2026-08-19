#include<bits/stdc++.h>
using namespace std;

int second_largest_element(vector<int> nums , int n){
    //base case
    if(n <= 1){
        return 0;
    }

    int largest_element = INT_MIN;
    int second_largest_element = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if(nums[i] > largest_element){
            second_largest_element = largest_element;
            largest_element = nums[i];
        }else if(nums[i] > second_largest_element && nums[i] != largest_element){ // handle duplicate cases
            second_largest_element = nums[i];
        }
    }
    
    return second_largest_element;
}

int main(){
    vector<int> nums = {1, 2, 4, 7, 7, 5};
    int n = nums.size();

    cout<<second_largest_element(nums,n)<<endl;
    return 0;
}