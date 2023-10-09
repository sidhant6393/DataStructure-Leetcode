class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto i = lower_bound(nums.begin(), nums.end(), target);
        auto j = upper_bound(nums.begin(), nums.end(), target);

        if (i != nums.end() && *i == target) {
            return {static_cast<int>(i - nums.begin()), static_cast<int>(j - nums.begin() - 1)};
        } else {
            return {-1, -1}; // Target not found in the array.
        }
    }
};
