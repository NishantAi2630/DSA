#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    for (int st = 0; st < n; st++)
    {
        for (int end = st + 1; end < n; end++)
        {

            if (nums[st] + nums[end] == target)
            {
                ans.push_back(st);
                ans.push_back(end);
                return ans;
            }
        }
    }
    return ans;
}

vector<int> pairsumopt(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;

    while (i < j)
    {
        int pairsum = nums[i] + nums[j];
        if (pairsum > target)
        {
            j--;
        }
        else if (pairsum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 9;

    vector<int> ans = pairsum(nums, target);

    if (ans.size() == 2)
    {
        cout << ans[0] << " , " << ans[1] << endl;
    }
    else
    {
        cout << "No pair found that sums to " << target << endl;
    }

    vector<int> ans1 = pairsumopt(nums, target);

    if (ans1.size() == 2)
    {
        cout << ans1[0] << " , " << ans1[1] << endl;
    }
    else
    {
        cout << "No pair found that sums to " << target << endl;
    }
    return 0;
}