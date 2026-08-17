#include <bits/stdc++.h>
using namespace std;

int partition_index(vector<int> &nums, int n, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = nums[low];

    while (i < j)
    {
        while (i <= high && nums[i]  <= pivot)
        {
            i++;
        }

        while(j >= low && nums[j] > pivot){
            j--;
        }
        

        if(i < j) swap(nums[i],nums[j]);
    } 

    swap(nums[low], nums[j]); // last awap to get the partiton index

    return j;
}

void quick_sort(vector<int> &nums, int n, int low, int high)
{

    if (n <= 1)
        return;

    if (low < high)
    {
        int partition = partition_index(nums, n, low, high);
        quick_sort(nums, n, low, partition - 1);
        quick_sort(nums, n, partition + 1, high);
    }
}

int main()
{

    vector<int> nums = {4, 1, 7, 9, 3};
    int n = nums.size();

    int low = 0;
    int high = n - 1;

    quick_sort(nums, n, low, high);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}