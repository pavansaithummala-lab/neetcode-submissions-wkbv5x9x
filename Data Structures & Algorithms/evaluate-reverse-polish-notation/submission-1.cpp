class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk1;
        int tokens_size = tokens.size();
        int a=0,b=0;

        for(int i =0;i<tokens_size;i++){
            if((tokens[i]!="+")&&(tokens[i]!="-")&&(tokens[i]!="*")&&(tokens[i]!="/")){
                stk1.push(stoi(tokens[i]));
            }
            else{
                b = stk1.top();
                stk1.pop();
                a = stk1.top();
                stk1.pop();
                if(tokens[i]=="+"){
                    stk1.push(a+b);
                }
                else if(tokens[i]=="-"){
                    stk1.push(a-b);
                }
                else if(tokens[i]=="*"){
                    stk1.push(a*b);
                }
                else if(tokens[i]=="/"){
                    stk1.push(a/b);
                }
            }
        }
        return stk1.top();

    }
};
