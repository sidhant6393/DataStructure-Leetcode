#define mod 1000000;
class Solution {
public:
    
    long long maximumTripletValue(vector<int>& nums) {
        long long maxi = LLONG_MIN; // Initialize to the minimum possible long long value
        for (int i = 0; i < nums.size() - 2; i++) {
            for (int j = i + 1; j < nums.size() - 1; j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    long long ans = (long long)(nums[i] - nums[j]) * nums[k];
                    maxi = max(maxi, ans);
                }
            }
        }
        if(maxi<0) return 0;
        return maxi;
    }
};