#include<bits/stdc++.h>
using namespace std;

vector<int> union_sorted_arrays(vector<int> &nums1 , vector<int> &nums2 , int n , int m){
    vector<int> ans;

    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if(nums1[i] < nums2[j]){
            if(ans.empty() || ans.back() != nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
        }
        else if(nums1[i] > nums2[j]){
            if(ans.empty() || ans.back() != nums2[j]){
                ans.push_back(nums2[j]);
            }
            j++;
        }else{
            if(ans.empty() || ans.back() != nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }
    
    // remaining elements
    while (i < n)
    {
        if(ans.empty() || ans.back() != nums1[i]){
            ans.push_back(nums1[i]);
        }
        i++;
    }
    
    while (j < m)
    {
        if(ans.empty() || ans.back() != nums2[j]){
            ans.push_back(nums2[j]);
        }
        j++;
    }
    
    return ans;
}

int main(){
    vector<int> nums1 = {1, 2, 3, 4};
    vector<int> nums2 = {2, 3, 5, 6};

    int n = nums1.size();
    int m = nums2.size();

    vector<int> ans = union_sorted_arrays(nums1, nums2, n, m);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}