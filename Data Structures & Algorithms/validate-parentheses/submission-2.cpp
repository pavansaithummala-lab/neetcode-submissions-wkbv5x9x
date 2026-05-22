class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for(char c : s){
            if(c=='(' || c=='[' || c=='{'){
                stk.push(c);
            }

            if(c==')'|| c ==']' || c=='}'){
                if(stk.empty()){
                    return false;
                }
                char top = stk.top();
                if((c==')' && top !='(') || (c==']' && top !='[') || (c=='}' && top !='{')){
                    return false;
                }
                stk.pop();
            }
        }
        if(stk.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};
