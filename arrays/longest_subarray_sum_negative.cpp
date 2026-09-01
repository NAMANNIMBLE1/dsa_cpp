#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {9,-3,3,-1,6,-5};
    int n = nums.size();


    int maxi =0;
    int sum = 0;
    unordered_map<int,int> mpp;

    for(int i = 0 ; i < n ; i++){
        sum += nums[i];
        
        if(sum == 0){
            // if the sum is 0, then we can update the maximum length of the subarray
            maxi = i+1;
        }

        if(mpp.find(sum) != mpp.end()){
            // if the sum is already present in the map, then we can calculate the length of the subarray
            maxi = max(maxi , i - mpp[sum]);
        }
        else{
            // add the sum to the map with its index
            mpp[sum] = i;
        }
    }
    cout << maxi << endl;
    return 0;
}