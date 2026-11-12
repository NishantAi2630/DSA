#include <iostream>
#include <vector>
using namespace std;

// brute force method 1
int majelement(vector<int> nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            return nums[i];
        }
    }
    return -1;
}

// brute force method 2
int majelement1(vector<int> nums)
{
    int n = nums.size();
    for (int val : nums)
    {
        int freq = 0;

        for (int el : nums)
        {
            if (el == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return val;
        }
    }
    return -1;
}

// optimal method using sorting
int majelement2(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();

    int freq = 1, ans = nums[0];

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }

        if (freq > n / 2)
        {
            return ans;
        }
    }
    return -1;
}

// moores method
int majelement3(vector<int> nums)
{
    int n = nums.size();
    int freq = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}


int main()
{
    vector<int> nums = {2, 2, 1, 1, 2, 2, 2, 1, 2, 2, 1, 1};

    // 1st
    int ans = majelement(nums);

    cout << " MAJOR ELEMENT = " << ans << endl;

    // 2nd
    int ans1 = majelement1(nums);

    cout << " MAJOR ELEMENT = " << ans1 << endl;


    // 3rd
    int an s2 = majelement2(nums);

    cout << " MAJOR ELEMENT = " << ans2 << endl;


    // 4th
    int ans3 = majelement3(nums);

    cout << " MAJOR ELEMENT = " << ans3 << endl;
    return 0;

}
