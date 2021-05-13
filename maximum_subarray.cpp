class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> dp(nums.size()+1);
         dp[0] = nums[0];
        int max_ans = dp[0];
        for(int i=1;i<nums.size();i++){
            dp[i] = max(nums[i],dp[i-1]+nums[i]);
            max_ans = max(max_ans,dp[i]);
        }
        return max_ans;
    }
};