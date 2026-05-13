class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if (nums.size() < 2) return false;

        sort(nums.begin(), nums.end());

        int i = 1;
        do {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
            i++;
        } while (i < nums.size());

        return false;
    }
};
