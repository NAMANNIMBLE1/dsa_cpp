#include<bits/stdc++.h>
using namespace std;

int longest_consecutive_sequence(vector<int> nums, int n) {

    if (n == 0) {
        return 0;
    }

    sort(nums.begin(), nums.end());

    int count = 1;
    int max_count = 1;

    for (int i = 0; i < n - 1; i++) {

        if (nums[i] + 1 == nums[i + 1]) {
            count++;
            max_count = max(max_count, count);
        }
        else if (nums[i] == nums[i + 1]) {
            continue;
        }
        else {
            count = 1;
        }
    }

    return max_count;
}


int main(){
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int n = nums.size();
    cout << longest_consecutive_sequence(nums, n) << endl;
    return 0;
}