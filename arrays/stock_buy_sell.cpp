#include<bits/stdc++.h>
using namespace std;

int max_stock_profit(vector<int> nums , int n){
    int max_profit = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = n-1 ; j > i; j--)
        {
            sum += nums[j]-nums[i];
            max_profit = max(sum , max_profit);
            sum = 0;
        }
    }
    return max_profit;
}

int max_stock_profit_simplified(vector<int> nums , int n){
    int max_profit = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j > i; j--){
            max_profit = max(max_profit,nums[j]-nums[i]);
        }
    }
    return max_profit;
}

int max_stock_profit_optimized(vector<int> nums , int n){
    int min_prices_so_far = INT_MAX;
    int max_profit_seen = 0;

    for(int i = 0 ; i < n ; i++){
        // suppose current values is lesser than prev seen 
        if(nums[i]< min_prices_so_far){
            min_prices_so_far = nums[i];
        }

        //checking the maximum profit so far 
        max_profit_seen = max(max_profit_seen,nums[i]-min_prices_so_far);
    }
    return max_profit_seen;
}

int main(){
    vector<int> nums = {7,1,5,3,6,4};
    int n = nums.size();
    
    cout<<max_stock_profit(nums,n);
    cout<<endl;
    cout<<max_stock_profit_simplified(nums,n);
    cout<<endl;
    cout<<max_stock_profit_optimized(nums,n);
    return 0;
}