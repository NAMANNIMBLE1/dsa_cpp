#include<bits/stdc++.h>
using namespace std;

// int max_element(vector<int> nums , int n)
// {
//     int max_number = INT_MIN;
//     for(auto x : nums){
//         if(x > max_number){
//             max_number = x;
//         }
//     }
//     return max_number;
// }

int missing_number(vector<int> nums , int n){
    //base case;
    if(n <=1){
        return -1;
    }

    // main logic
    int sum_n_numbers = 0;
    int sum_total_numbers = 0;

    // int max_num = max_element(nums , n);

    // for (int i = 1; i <= max_num; i++)
    // {
    //     sum_n_numbers += i;
    // }

    for (int i = 1; i <= n+1; i++)  // n +1 as it skips last element
    {
        sum_n_numbers += i;
    }

    /// this can also be done as n(n+1)/2 -> sum of n natural number
    
    
    for (int i = 0; i < n; i++)
    {
        sum_total_numbers += nums[i];
    }

    return sum_n_numbers-sum_total_numbers;
}



int missing_number_optimized(vector<int> nums , int n){
    // base case
    if(n <=1){
        return -1;
    }
    
    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < n; i++)
    {
        xor1 ^= nums[i];
    }
    
    for (int i = 1; i <= n+1; i++)
    {
        xor2 ^= i;
    }
    
    return xor2^xor1;
}

int main(){
    vector<int> nums = {8, 2, 4, 5, 3, 7, 1};
    int n = nums.size();

    cout<<missing_number(nums,n);
    cout<<endl;
    cout<<missing_number_optimized(nums,n);
    return 0;
}