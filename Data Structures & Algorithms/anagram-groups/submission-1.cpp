class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sorted_map;
        vector<vector<string>> res; 
        string sort;
        for(int i=0; i<strs.size(); i++){
            sort=strs[i];
            std::sort(sort.begin(), sort.end());
            sorted_map[sort].push_back(strs[i]);
        }
        for (auto& str: sorted_map){
            res.push_back(std::move(str.second));
        }
        return res;
    }
};
