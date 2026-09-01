#include<bits/stdc++.h>
using namespace std;

int majority_element(vector<int> nums , int n){
    if(n <= 1){
        return -1;
    }

    int element = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(count == 0){
            element = nums[i];
            count = 1;
        }else if(element == nums[i]){
            count++;
        }
        else{
            count--;
        }
    }
    return element;
}


int main(){
    vector<int> nums = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    int n = nums.size();


    cout<<majority_element(nums,n);

    return 0;
}