class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long maxi=max(nums[0],nums[1]);
        long long maxDiff=nums[0]-nums[1];
        long long res=INT_MIN;
        for(int k=2;k<nums.size();k++){
            long long ans=maxDiff*nums[k];
            res=max(ans,res);
            maxDiff=max(maxDiff,maxi-nums[k]);
            maxi=max(maxi,static_cast<long long>(nums[k]));
        }
        if(res<0) return 0;
        return res;
    }
};
