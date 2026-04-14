class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int length = nums.size();
        
        for (int i=0; i< length-2; i++){
            if((i>0)&&(nums[i-1]==nums[i])){
                continue;
            }
            int j=i+1;
            int k=length-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    while((j<k)&&(nums[j]==nums[j+1])){
                        j++;
                    }
                    while((j<k)&&(nums[k]==nums[k-1])){
                        k--;
                    }
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]>0)
                {
                    k--;
                }
                else{
                    j++;
                }
            }

        }
        return res;
    }
};
