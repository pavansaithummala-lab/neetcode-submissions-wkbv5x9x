class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        unordered_set<int> nums_set(nums.begin(), nums.end());
        int res=0;
        int current;
        int current_streak=1;

        for(int num: nums_set){
            if(nums_set.find(num-1)==nums_set.end()){
                current = num;
                current_streak=1;
            }
            while(nums_set.find(current+1) != nums_set.end()){
                current++;
                current_streak++;
            }
            res = max(res,current_streak);
        }
        return res;
    }
};
