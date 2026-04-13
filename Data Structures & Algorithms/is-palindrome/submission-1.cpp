class Solution {
public:
    bool isPalindrome(string s) {
        string formatted_s;

        for (unsigned char c : s){
            if(isalnum(c)){
                formatted_s.push_back(tolower(c));
            }
        }

        if(formatted_s.empty()){
            return true;
        }

        int str_len = formatted_s.size()-1;

        bool res=false;
        for (int i=0; i<formatted_s.size()/2+1;i++){
            if(formatted_s[i]!=formatted_s[str_len-i]){
                return res;
            }
        }
        return true;
    }
};
