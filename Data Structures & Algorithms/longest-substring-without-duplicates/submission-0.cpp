class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sliding;
        int max_len=0;
        int left=0;
        int n=s.size();

        for (int i=0; i<n; i++){
            while(sliding.contains(s[i])){
                sliding.erase(s[left]);
                left++;
            }
            sliding.insert(s[i]);
            max_len = max(max_len, i-left+1);
        }
        return max_len;
    }
};
