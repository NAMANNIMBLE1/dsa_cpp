#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> nums , int n ){
    vector<int> leader_list;
    if(n == 0){
        return leader_list;
    }

    for(auto i = 0 ; i < n ; i++){
        bool leader = true;
        for(auto j = i+1 ; j < n ; j++){
            if(nums[j] > nums[i]){
                // not a leader 
                leader = false;
                break; // breaking j to move i
            }
        }
        if(leader == true){
            leader_list.push_back(nums[i]);
        }
    }

    return leader_list;
}


vector<int> leaders_optimized(vector<int> nums , int n){
    vector<int> leader_list;
    if(n == 0){
        return leader_list;
    }

    int max_element = nums[n-1];
    leader_list.push_back(max_element);

    for(auto i = n-2 ; i >= 0 ; i--){
        if(nums[i] > max_element){
            leader_list.push_back(nums[i]);
            max_element = nums[i];
        }
    }
    
    reverse(leader_list.begin(),leader_list.end());
    
    return leader_list;
}




int main(){
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    int n = nums.size();

    // vector<int> final_leaders = leaders(nums , n);
    vector<int> final_leaders = leaders_optimized(nums , n);

    for(auto x : final_leaders){
        cout<<x<<" ";
    }
    return 0;
}