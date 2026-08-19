#include<bits/stdc++.h>
using namespace std;

void move_zeros_end(vector<int> &nums , int n){
    if(n <=1){
        return;
    }

    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if(nums[j] == 0){
            i = j;
            break;
        }
    }

    // case if no zero found 
    if(i ==n){
        return;
    }

    for (int j = i+1; j < n; j++)
    {
        if(nums[j] != 0){
            swap(nums[j],nums[i]);
            i++;
        }
    }
}

int main(){
    vector<int> nums = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int n = nums.size();

    move_zeros_end(nums,n);

    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}