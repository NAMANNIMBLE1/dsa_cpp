#include<bits/stdc++.h>
using namespace std;

void linear_search(vector<int> nums , int n , int target){
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]  == target){
            flag = true;
        }
        else{
        }
    }
    

    if(flag == true){
        cout<<"element found!"<<endl;
    }else{
        cout<<"element not found!"<<endl;
    }
}


int main(){
    vector<int> nums = {1,2,3,4,5};
    int n = nums.size();
    int target = 1;
    linear_search(nums,n,target);

    return 0;
}