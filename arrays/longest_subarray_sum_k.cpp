#include <bits/stdc++.h>
using namespace std;

int longest_subarray_length(vector<int> nums, int n, int target)
{

    int max_subarray_length = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                // cout << nums[k] << " ";
                // CALCULATE THE SUM
                sum += nums[k];
            }
            if (sum == target)
            {
                int length = j - i + 1;
                max_subarray_length = max(length, max_subarray_length);
            }
            // cout << endl;
        }
    }

    return max_subarray_length;
}

int longest_subarray_length_better(vector<int> nums, int n, int target)
{
    int max_length_subarray = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            // cout<<nums[j]<<" ";

            sum += nums[j];

            if (sum == target)
            {
                max_length_subarray = max(max_length_subarray, j - i + 1);
            }
        }
        // cout<<endl;
    }

    return max_length_subarray;
}


int longest_subarray_length_sliding_window(vector<int> nums , int n , int target){
    int i = 0;
    int j = 0;

    int sum = 0;
    int max_length_subarray = 0;

    while (j < n)
    {
        // normally
        sum += nums[j];

        // more than the target 
        if(sum > target){
            sum -= nums[i];
            i++;
        }
        
        // target achieved
        if(sum == target){
            max_length_subarray = max(max_length_subarray,j-i+1);
        }

        j++;
    }
    
    return max_length_subarray;
}





int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int n = nums.size();

    cout << "max subarray length with sum == k is " << longest_subarray_length(nums, n, k);
    cout<<endl;
    cout << "max subarray length with sum == k is " << longest_subarray_length_better(nums, n, k);\
    cout<<endl;
    cout << "max subarray length with sum == k is " << longest_subarray_length_sliding_window(nums, n, k);
    return 0;
}