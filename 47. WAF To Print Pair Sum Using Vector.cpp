#include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum < target)
        {
            i++;
        }
        else if (pairSum > target)
        {
            j--;
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
    vector<int> nums = {2, 5, 7, 9, 11};
    int target = 14;
    vector<int> ans = pairSum(nums, target);
    cout << ans[0] << " , " << ans[1] << endl;
    return 0;
}