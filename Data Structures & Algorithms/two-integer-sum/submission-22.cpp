class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int pd = 2e7 + 15;
        vector<int> pres(2 * pd + 15, 0);
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (pres[pd + target - nums[i]])
                return {pres[pd + target - nums[i]] - 1, i};
            else
                pres[pd + nums[i]] = i + 1;
        }
        return {};
    }
};