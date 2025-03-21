class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int b = (int)nums.size(), ans = 1;
        vector<int> dp(b,1);
        for(int i=1; i<b; i++){
            for(int y=0; y<i; y++){
                if(nums[y] < nums[i]) dp[i] = max(dp[i],(dp[y]+1));
            }
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};
