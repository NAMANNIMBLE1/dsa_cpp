#include<bits/stdc++.h>
using namespace std;

void rotate_left_k_places(vector<int> &nums , int n , int k){
    if(n <= 1){
        return;
    }
    // normalize the k
    k = k % n;
    // store first k elements in temp
    int temp[k];

    for (int i = 0; i < k; i++){
        temp[i] = nums[i];
    }
    // shift on left by k places
    for (int i = k; i < n; i++){
        nums[i-k] = nums[i];
    }
    // copy back the temp;
    for (int i = 0; i < k; i++){
        nums[n-k+i] = temp[i];
    }
}


void right_rotate_k_places(vector<int> &nums , int n , int k){
    // base case
    if(n <= 1){
        return;
    }
    
    // normalize k
    k %= n;

    // copy last k elements
    int temp[k];
    for (int i = n-k; i < n; i++)
    {
        temp[i - (n-k)] = nums[i];
    }
    
    // shift the right k times 
    for (int i = n-k-1; i >= 0; i--)
    {
        nums[i+k] = nums[i];
    }
    

    // push back the elements in front
    for (int i = 0; i < k; i++)
    {
        nums[i] = temp[i];
    }
}


//*************************more optimized **************** */


void reverse(vector<int> &nums , int start, int end){
    while (start < end)
    {
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}

void reverse_right_optimized(vector<int> &nums , int n , int k){
    if(n <= 1){
        return;
    }

    reverse(nums,0,n-1);
    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
}

void reverse_left_optimized(vector<int> &nums , int n , int k){
    if(n <= 1){
        return;
    }

    reverse(nums,0,k-1);
    reverse(nums,k,n-1);
    reverse(nums,0,n-1);
}


int main(){
    int k = 2;
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int n = nums.size();
    // rotate_left_k_places(nums,n,k);
    // right_rotate_k_places(nums,n,k);
    //reverse_right_optimized(nums,n,k);
    reverse_left_optimized(nums,n,k);

    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<" ";
    }
    
    return 0;
}