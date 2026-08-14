#include <bits/stdc++.h>
using namespace std;

class solution
{
private:
    vector<int> nums;
    int n;

public:
    solution(vector<int> nums, int n)
    {
        this->nums = nums;
        this->n = n;
    }

    // method
    void selection_sort(vector<int> &nums, int n)
    {
        for (int i = 0; i < n; i++)
        {
            int minimum_element = i;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] < nums[minimum_element])
                {
                    minimum_element = j;
                }
            }
            swap(nums[i], nums[minimum_element]);
        }
    }

};

int main()
{
    vector<int> nums = {13, 46, 24, 52, 20, 9};
    int n = nums.size();

    solution sol(nums, n);

    sol.selection_sort(nums, n);

    for (auto x : nums)
    {
        cout << x << " ";
    }

    return 0;
}