#include<bits/stdc++.h>
using namespace std;

int max_subarray_sum(vector<int> &nums , int n){
    int max_sum = 0;

    for(int i = 0 ; i < n ; i++){
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k= i; k <= j; k++)
            {
                sum += nums[k];
                max_sum = max(max_sum,sum);
            }
            
        }
        
    }
    return max_sum;
}

int max_subarray_sum_better(vector<int>& nums, int n) {

    int sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < n; i++) {

        sum += nums[i];

        max_sum = max(max_sum, sum);

        if (sum < 0) {
            sum = 0;
        }
    }

    return max_sum;
}


int main(){
    vector<int> nums = {2, 3, 5, -2, 7, -4};
    int n = nums.size();

    cout<<max_subarray_sum(nums,n);
    cout<<endl;
    cout<<max_subarray_sum_better(nums,n);
    return 0;
}