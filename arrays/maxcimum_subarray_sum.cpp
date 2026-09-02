#include<bits/stdc++.h>
using namespace std;

int max_subarray_sum(vector<int> nums , int n){
    int max_sum = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            max_sum = max(sum,max_sum);
        }
    }

    return max_sum;
}


int max_subarray_sum_optimized(vector<int> nums , int n){
    long long maxi = INT_MIN;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    vector<int> nums = {-2, -3, -7, -2, -10, -4};
    int n = nums.size();

    cout<<max_subarray_sum(nums,n);
    cout<<endl;
    cout<<max_subarray_sum_optimized(nums,n);
    return 0;
}