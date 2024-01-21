class Solution {
public:
    int rob(vector<int>& nums) {
        int  n = nums.size();
        vector<int> dp(n+1, -1);
        return rec(nums, 0, dp);
    }
    
     int rec(vector<int>& nums, int idx,vector<int>&dp){
        if(idx>=nums.size()) return 0;
        if(dp[idx]!= -1) return dp[idx];
        return dp[idx] = max(nums[idx]+rec(nums,idx+2,dp), rec(nums, idx+1,dp));
        
    }
    
};