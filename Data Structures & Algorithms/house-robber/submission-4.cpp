class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> cost(n);

        if(n==0){
            return 0;
        }
        if(n==1){
            return nums[0];
        }
        cost[0]=nums[0];
        cost[1]=max(nums[0],nums[1]);

        for(int i=2; i<n; i++){
            cost[i]=max(cost[i-1], nums[i]+cost[i-2]);
        }
        return cost[n-1];
        
    }
};
