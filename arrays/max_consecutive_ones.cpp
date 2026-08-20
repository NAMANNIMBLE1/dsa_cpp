#include<bits/stdc++.h>
using namespace std;

int max_consecutive_ones(vector<int> nums, int n)
{
    int count = 0;
    int max_count = 0;

    int j = 0;

    while(j < n)
    {
        if(nums[j] == 1)
        {
            count++;
        }
        else
        {
            max_count = max(max_count, count);
            count = 0;
        }

        j++;
    }

    max_count = max(max_count, count);

    return max_count;
}

int main(){
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int n = nums.size();

    cout<<max_consecutive_ones(nums,n)<<endl;
    return 0;
}