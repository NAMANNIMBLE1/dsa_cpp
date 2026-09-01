#include<bits/stdc++.h>
using namespace std;

void dutch_flag_algo(vector<int> &nums , int n){
    int low = 0;
    int high = n;
    int mid = 0;


    while (mid <= high)
    {
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }else if(nums[mid] == 2){
            swap(nums[high],nums[mid]);
            high--;
        }
        else{
            mid++;
        }
    }
}

int main(){
    vector<int> nums = {1, 0, 2, 1, 0};
    int n = nums.size()-1;

    dutch_flag_algo(nums,n);

    for(int &x : nums){
        cout<<x<<" ";
    }

    
    return 0;
}