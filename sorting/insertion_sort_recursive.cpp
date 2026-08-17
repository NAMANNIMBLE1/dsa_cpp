#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &nums , int n , int i ){

    if(i == n)return;

    int key = nums[i];
    int j = i-1;

    while (j >=0 && nums[j] > key)
    {
        nums[j+1] = nums[j]; // shifting rightwards
        j--;
    }
    nums[j+1] = key;

    insertion_sort(nums , n ,i+1);
}

int main(){
    vector<int> nums = {13,46,24,52,20,9};
    int n = nums.size();

    insertion_sort(nums,n,1);

    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}