#include<bits/stdc++.h>
using namespace std;

int max_subarray_length(vector<int> nums , int n , int target){
    int max_length = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k<=j; k++)
            {
                sum += nums[k];
            }
            
            if(sum == target){
                max_length = max(max_length,j-i+1);
            }
        }
        
    }
    return max_length;
}



int max_subarray_length_better(vector<int> nums , int n , int target){
    int max_length = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];

            if(sum == target){
                max_length = max(max_length,j-i+1);
            }
        }
        
    }
    return max_length;
}

int main(){
    vector<int> nums = {9, -3, 3, -1, 6, -5};
    int n = nums.size();
    int k = 0;

    cout<<max_subarray_length(nums,n,k);
    cout<<endl;
    cout<<max_subarray_length_better(nums,n,k);

    return 0;
}