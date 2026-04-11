class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> k_map;
        vector<int> res;
        int nums_size = nums.size();


        for (int i:nums){
            k_map[i]++;
        }
        //bucket sort
        //allocate space as we are indexing the frequency  
        vector<vector<int>> bucket(nums_size+1);
        for (auto& [val,count] : k_map){
            bucket[count].push_back(val);
        }

        for (int i=nums_size;i>=0&&res.size()<k;i--){
            for(int num:bucket[i]){
                res.push_back(num);
                if(res.size()==k){
                    return res;
                }
            }
        }
        return res;
    }
};
