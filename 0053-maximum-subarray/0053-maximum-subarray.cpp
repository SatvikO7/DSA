class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best = nums[0]; 
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            sum = max(nums[i], sum + nums[i]);
            best = max(best, sum);
        }
        
        return best;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna