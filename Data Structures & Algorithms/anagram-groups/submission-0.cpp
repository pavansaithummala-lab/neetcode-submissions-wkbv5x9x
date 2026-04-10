class Solution {
public:
    bool isAnagram(string& str1, string& str2) {
        if(str1.length()!=str2.length()){
            return false;
        }
        unordered_map <char,int> freq;
        for(char c : str1)
            freq[c]++;
        for(char c: str2){
            if(freq[c]==0){
                return false;
            }
            freq[c]--;
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> final_res;
        vector<string> res;
        unordered_map <string, int> found;
        int i,j;

        for (i=0; i<strs.size(); i++){
            if(found[strs[i]]==0){
            res={strs[i]};
            for (j=i+1; j<strs.size(); j++){
                if (isAnagram(strs[i], strs[j])){
                    res.push_back(strs[j]);
                    found[strs[j]]++;
                }
            }
                final_res.push_back(res);
            }
            
        }
        return final_res;
    }
};
