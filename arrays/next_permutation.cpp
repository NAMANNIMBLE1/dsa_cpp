#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int>& nums, int n, int index = 0) {

    vector<vector<int>> permutations;

    // base case
    if (index == n) {
        permutations.push_back(nums);
        return permutations;
    }

    for (int i = index; i < n; i++) {

        // choose
        swap(nums[index], nums[i]);

        // recursively generate remaining permutations
        vector<vector<int>> results = permute(nums, n, index + 1);

        // save results
        for (auto p : results) {
            permutations.push_back(p);
        }

        // undo
        swap(nums[index], nums[i]);
    }

    return permutations;
}

vector<vector<int>> generate_permutations(vector<int> nums, int n) {

    sort(nums.begin(), nums.end());

    vector<vector<int>> permutations = permute(nums, n, 0);

    sort(permutations.begin(),permutations.end()); // for lexicographic order

    return permutations;
}

vector<int> next_permutation(vector<vector<int>> ans , vector<int> nums){
    for(int i = 0 ; i < ans.size() ; i++){
        // if found in the ans find next permutations
        if(ans[i] == nums){
            // if the next permutations is last
            if(i == ans.size()-1){
                return ans[0];
            }
            //otherwise just return next
            return ans[i+1];
        }
    }
    return {};
}

int main() {

    vector<int> nums = {1,3,2};
    int n = nums.size();

    vector<vector<int>> all_permutations = generate_permutations(nums, n);

    // for (auto permutation : ans) {

    //     for (auto x : permutation) {
    //         cout << x << " ";
    //     }

    //     cout << endl;
    // }

    vector<int> ans = next_permutation(all_permutations,nums);

    for(auto x : ans){
        cout<<x<<" ";
    }

    return 0;
}