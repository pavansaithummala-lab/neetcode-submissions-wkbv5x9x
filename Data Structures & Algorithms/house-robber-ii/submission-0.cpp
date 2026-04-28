class Solution {
public:

    int robLinear(vector<int>& nums){
        int prev2 = 0;
        int prev1 = 0;

        for(int i=0; i<nums.size(); i++){
            int curr = max(prev1, nums[i] + prev2);

            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n==1){
            return nums[0];
        }

        vector<int> case1(nums.begin(), nums.end()-1);
        vector<int> case2(nums.begin()+1, nums.end());
        return max(robLinear(case1), robLinear(case2));
    
    }
};
