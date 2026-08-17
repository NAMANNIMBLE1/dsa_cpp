#include<bits/stdc++.h>
using namespace std;

class mergeSort{
    private:
        vector<int> nums;
        int n;
    
    public:
        mergeSort(vector<int> nums , int n){
            this->nums = nums;
            this->n = n;
        }

        void print_array(vector<int> nums , int n){

            for (int i = 0; i < n; i++)
            {
                cout<<nums[i]<<" ";
            }
            cout<<endl;
        }


        void merge(vector<int> &nums , int n , int low , int mid , int high){
            vector<int> temp; // temp array for storing elements
            int right = mid+1; // to check other half in every recursive call
            int left = low;

            while (left <= mid && right <= high)
            {
                if(nums[left] <= nums[right]){
                    temp.push_back(nums[left]);
                    left++;
                }else{
                    temp.push_back(nums[right]);
                    right++;
                }
            }


            while (left<=mid)
            {
                /* code */
                temp.push_back(nums[low]);
                left++;
            }
            
            while (right <= high)
            {
                /* code */
                temp.push_back(nums[right]);
                right++;
            }


            for (int i = low; i <= high; i++)
            {
                nums[i] = temp[i-low];
            }
        }

        void merge_sort(vector<int> &nums , int n , int low , int high){
            // base case
            if(low >= high){
                return;
            }

            // divide the array
            int mid = (low+high)/2;

            merge_sort(nums , n , low , mid); // left half 
            merge_sort(nums , n , mid+1 , high); // right half
            merge(nums , n , low , mid , high); // merge logic


            print_array(nums , n);
        }
};




int main(){

    vector<int> nums = {3,2,8,5,1,4,23};
    int n = nums.size();

    mergeSort* sol = new mergeSort(nums , n);

    sol->merge_sort(nums , n , 0 , n-1);

    return 0;
}
